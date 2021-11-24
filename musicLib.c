/******************************************************************************
 *   This file is part of musicLib.
 *
 *   musicLib is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   musicLib is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with musicLib.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#include <musicLib.h>
#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>

/* GLOBAL values */
const Note_t *song_array;
const Note_config_t *config_array;

uint_fast16_t counter = 0;        /* Tracks the current note being played */
uint_fast16_t songTempo = 0;      /* Global tempo of the song */
float songVolume = 0;             /* Global volume of the song */
uint_fast16_t config_index = 1;   /* Index of the current config value */
uint_fast16_t repetition_counter; /* Tracks the number of repetitions left */

/* Timer_A UpMode Configuration Parameter (used for the buzzer) */
Timer_A_UpModeConfig timerUpConfig = {
                                      TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
                                      TIMER_A_CLOCKSOURCE_DIVIDER_64,         // SMCLK/1 = 3MHz
                                      0,                                      // Frequency value
                                      TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
                                      TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE,     // Enable CCR0 interrupt
                                      TIMER_A_DO_CLEAR                        // Clear value
                                      };

/* Timer_A Compare Configuration Parameter (PWM) */
Timer_A_CompareModeConfig compareConfig_PWM = {
                                               TIMER_A_CAPTURECOMPARE_REGISTER_4,          // Use CCR3
                                               TIMER_A_CAPTURECOMPARE_INTERRUPT_DISABLE,   // Disable CCR interrupt
                                               TIMER_A_OUTPUTMODE_TOGGLE_SET,              // Toggle output but
                                               0                                           // Volume Duty Cycle
                                               };

/* Timer_A Up Configuration Parameter (used for tempo) */
Timer_A_UpModeConfig upConfig = {
                                 TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK = 3 MhZ
                                 TIMER_A_CLOCKSOURCE_DIVIDER_1,          // SMCLK/12 = 250 KhZ
                                 0,                                      // Tick period
                                 TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
                                 TIMER_A_CCIE_CCR0_INTERRUPT_DISABLE,    // Disable CCR0 interrupt
                                 TIMER_A_DO_CLEAR                        // Clear value
                                 };

void _buzzerInit()
{
    /* Configures P2.7 to PM_TA0.4 for using Timer PWM to control the buzzer */
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);
    /* Configuring Timer_A0 for Up Mode */
    Timer_A_configureUpMode(TIMER_A0_BASE, &upConfig);
}

void _timerInit()
{
    /* Configuring Timer_A1 for Up Mode */
    Timer_A_configureUpMode(TIMER_A1_BASE, &timerUpConfig);
    /* Enabling interrupts */
    Interrupt_enableInterrupt(INT_TA1_0);
}

/**
 * Initializes the specific hardware (like peripherals, clocks, timers) of the embedded system for playing songs with the buzzer.
 */
void _musicLibInit()
{
    CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_6);
    CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    _buzzerInit();
    _timerInit();
}

#define VOLUME_LOWERBOUND 15   /* Volume threshold under which the volume is too low to hear */

uint_fast16_t max(uint_fast16_t num1, uint_fast16_t num2) {
    return (num1 > num2 ) ? num1 : num2;
}

/* Counter used to skip clock cycles and make the song slower, proportional to the
 * longest note value. Used to have slower songs and prevent overflow on the timer value */
uint_fast16_t skip = 0;

/* Timer handler where the single notes are played */
void TA1_0_IRQHandler(void)
{
    if (skip == 0) /* Check for skip cycle */
    {
        if (config_array[config_index].index == END_CONFIG) /* Reset config if at the end */
            config_index = 0;

        if (config_array[config_index].index == (counter + 1)) { /* If time to change config values, update */
            songTempo = config_array[config_index].tempo % TEMPO_UPPERBOUND;
            songVolume = config_array[config_index].volume;
            config_index++;
        }

        /* Update new values for the note that will soon be played */
        timerUpConfig.timerPeriod = (uint_fast16_t) (song_array[counter].tempo * songTempo); /* Note tempo */

        if (song_array[counter].tempo != 0) {
            Timer_A_configureUpMode(TIMER_A1_BASE, &timerUpConfig);
            Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
        }

        /* Note frequency values */
        upConfig.timerPeriod = song_array[counter].frequency.clock;
        upConfig.clockSourceDivider = song_array[counter].frequency.divider;

        /* Note volume (PWM normalized with respect to the note's clock value) */
        uint_fast16_t note_volume = (uint_fast16_t) ((float) ((song_array[counter].frequency.clock / 100) * songVolume));
        compareConfig_PWM.compareValue = max(note_volume, VOLUME_LOWERBOUND);

        /* Update timer values */
        Timer_A_configureUpMode(TIMER_A0_BASE, &upConfig);
        Timer_A_startCounter(TIMER_A0_BASE, TIMER_A_UP_MODE);
        Timer_A_initCompare(TIMER_A0_BASE, &compareConfig_PWM);

        /* End of song check */
        if (song_array[counter].frequency.clock == 1) {
            if(repetition_counter != 0) {
                repetition_counter--;
                if (repetition_counter < 1) { /* Stop song */
                    Timer_A_stopTimer(TIMER_A1_BASE);
                    Timer_A_stopTimer(TIMER_A0_BASE);
                    Timer_A_disableCaptureCompareInterrupt(TIMER_A1_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_0);
                }
            }
            /* New repetition */
            config_index = 0;
            counter = 0;
        } else {
            /* Advance skip and counter values */
            skip++;
            counter++;
        }
    }
    else /* Skip this cycle */
    {
        skip = (skip + 1) % (DOUBLE * 2);
    }

    Timer_A_clearCaptureCompareInterrupt(TIMER_A1_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_0);
}

/**
 * The main function of the library.
 * Given a song, a precise config of that song and how many times (repetition) the user wants to hear that song, it plays the melody.
 */
void playSong(const Note_t *song, const Note_config_t *config, const uint_fast16_t repetition)
{
    /* Initialize song configurations */
    songTempo = config[0].tempo % TEMPO_UPPERBOUND;
    timerUpConfig.timerPeriod = songTempo;
    songVolume = config[0].volume;
    Timer_A_configureUpMode(TIMER_A1_BASE, &timerUpConfig);

    /* Initialize global variables */
    song_array = song;
    config_array = config;
    repetition_counter = repetition;

    /* Start TIMER_A0_BASE & TIMER_A1_BASE */
    Timer_A_startCounter(TIMER_A0_BASE, TIMER_A_UP_MODE);
    Timer_A_initCompare(TIMER_A0_BASE, &compareConfig_PWM);
    Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
}
