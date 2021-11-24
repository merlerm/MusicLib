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

#ifndef MUSICLIB_H_ /* MUSICLIB_H_ */
#define MUSICLIB_H_ /* MUSICLIB_H_ */

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <stdint.h>

/******************************************************************************
*                          For more in depth details,                         *
*                           check out the repo wiki                           *
*              at https://github.com/Merlo17/MusicLib/wiki/1.-Home            *
******************************************************************************/

/******************************************************************************
*                                    PAUSE                                    *
******************************************************************************/
#define PAUSE 0,     TIMER_A_CLOCKSOURCE_DIVIDER_1

/******************************************************************************
*                              SONG END MARKER                                *
******************************************************************************/
#define END   1,     TIMER_A_CLOCKSOURCE_DIVIDER_1

/******************************************************************************
*                              CONFIG END MARKER                              *
******************************************************************************/
#define END_CONFIG       0

/******************************************************************************
*                                RANGE 2 NOTES                                *
******************************************************************************/
#define DO2   45864, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define C2    DO2
#define SIs1  DO2
#define Bs1   DO2
/******************************************************************************/
#define DOs2  43290, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Cs2   DOs2
#define REf2  DOs2
#define Df2   DOs2
/******************************************************************************/
#define RE2   40860, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define D2    RE2
/******************************************************************************/
#define REs2  38570,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Ds2   REs2
#define MIf2  REs2
#define Ef2   REs2
/******************************************************************************/
#define MI2   36403,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define E2    MI2
#define FAf2  MI2
#define Ff2   MI2
/******************************************************************************/
#define FA2   34360,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define F2    FA2
#define MIs2  FA2
#define Es2   FA2
/******************************************************************************/
#define FAs2  32432,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Fs2   FAs2
#define SOLf2 FAs2
#define Gf2   FAs2
/******************************************************************************/
#define SOL2  30612,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define G2    SOL2
/******************************************************************************/
#define SOLs2 28893,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Gs2   SOLs2
#define LAf2  SOLs2
#define Af2   SOLs2
/******************************************************************************/
#define LA2   27272,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define A2    LA5
/******************************************************************************/
#define LAs2  25742,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define As2   LAs2
#define SIf2  LAs2
#define Bf2   LAs2
/******************************************************************************/
#define SI2   24297,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define B2    SI2
#define DOf3  SI2
#define Cf3   SI2

/******************************************************************************
*                                RANGE 3 NOTES                                *
******************************************************************************/
#define DO3   22934, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define C3    DO3
#define SIs2  DO3
#define Bs2   DO3
/******************************************************************************/
#define DOs3  21646, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Cs3   DOs3
#define REf3  DOs3
#define Df3   DOs3
/******************************************************************************/
#define RE3   20431, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define D3    RE3
/******************************************************************************/
#define REs3  19285,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Ds3   REs3
#define MIf3  REs3
#define Ef3   REs3
/******************************************************************************/
#define MI3   18202,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define E3    MI3
#define FAf3  MI3
#define Ff3   MI3
/******************************************************************************/
#define FA3   17181,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define F3    FA3
#define MIs3  FA3
#define Es3   FA3
/******************************************************************************/
#define FAs3  16216,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Fs3   FAs3
#define SOLf3 FAs3
#define Gf3   FAs3
/******************************************************************************/
#define SOL3  15306,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define G3    SOL3
/******************************************************************************/
#define SOLs3 14447,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Gs3   SOLs3
#define LAf3  SOLs3
#define Af3   SOLs3
/******************************************************************************/
#define LA3   13636,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define A3    LA5
/******************************************************************************/
#define LAs3  12871,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define As3   LAs3
#define SIf3  LAs3
#define Bf3   LAs3
/******************************************************************************/
#define SI3   12148,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define B3    SI3
#define DOf4  SI3
#define Cf4   SI3

/******************************************************************************
*                                RANGE 4 NOTES                                *
******************************************************************************/
#define DO4   11466, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define C4    DO4
#define SIs3  DO4
#define Bs3   DO4
/******************************************************************************/
#define DOs4  10823, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Cs4   DOs4
#define REf4  DOs4
#define Df4   DOs4
/******************************************************************************/
#define RE4   10215, TIMER_A_CLOCKSOURCE_DIVIDER_1
#define D4    RE4
/******************************************************************************/
#define REs4  9642,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Ds4   REs4
#define MIf4  REs4
#define Ef4   REs4
/******************************************************************************/
#define MI4   9101,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define E4    MI4
#define FAf4  MI4
#define Ff4   MI4
/******************************************************************************/
#define FA4   8590,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define F4    FA4
#define MIs4  FA4
#define Es4   FA4
/******************************************************************************/
#define FAs4  8108,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Fs4   FAs4
#define SOLf4 FAs4
#define Gf4   FAs4
/******************************************************************************/
#define SOL4  7653,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define G4    SOL4
/******************************************************************************/
#define SOLs4 7223,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Gs4   SOLs4
#define LAf4  SOLs4
#define Af4   SOLs4
/******************************************************************************/
#define LA4   6818,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define A4    LA4
/******************************************************************************/
#define LAs4  6435,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define As4   LAs4
#define SIf4  LAs4
#define Bf4   LAs4
/******************************************************************************/
#define SI4   6074,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define B4    SI4
#define DOf5  SI4
#define Cf5   SI4

/******************************************************************************
*                                RANGE 5 NOTES                                *
******************************************************************************/
#define DO5   5733,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define C5    DO5
#define SIs4  DO5
#define Bs4   DO5
/******************************************************************************/
#define DOs5  5412,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Cs5   DOs5
#define REf5  DOs5
#define Df5   DOs5
/******************************************************************************/
#define RE5   5107,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define D5    RE5
/******************************************************************************/
#define REs5  4821,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Ds5   REs5
#define MIf5  REs5
#define Ef5   REs5
/******************************************************************************/
#define MI5   4550,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define E5    MI5
#define FAf5  MI5
#define Ff5   MI5
/******************************************************************************/
#define FA5   4295,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define F5    FA5
#define MIs5  FA5
#define Es5   FA5
/******************************************************************************/
#define FAs5  4054,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Fs5   FAs5
#define SOLf5 FAs5
#define Gf5   FAs5
/******************************************************************************/
#define SOL5  3826,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define G5    SOL5
/******************************************************************************/
#define SOLs5 3611,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Gs5   SOLs5
#define LAf5  SOLs5
#define Af5   SOLs5
/******************************************************************************/
#define LA5   3409,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define A5    LA5
/******************************************************************************/
#define LAs5  3217,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define As5   LAs5
#define SIf5  LAs5
#define Bf5   LAs5
/******************************************************************************/
#define SI5   3037,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define B5    SI5
#define DOf6  SI5
#define Cf6   SI5

/******************************************************************************
*                                RANGE 6 NOTES                                *
******************************************************************************/
#define DO6   2866,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define C6    DO6
#define SIs5  DO6
#define Bs5   DO6
/******************************************************************************/
#define DOs6  2705,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Cs6   DOs6
#define REf6  DOs6
#define Df6   DOs6
/******************************************************************************/
#define RE6   2553,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define D6    RE6
/******************************************************************************/
#define REs6  2410,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Ds6   REs6
#define MIf6  REs6
#define Ef6   REs6
/******************************************************************************/
#define MI6   2275,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define E6    MI6
#define FAf6  MI6
#define Ff6   MI6
/******************************************************************************/
#define FA6   2147,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define F6    FA6
#define MIs6  FA6
#define Es6   FA6
/******************************************************************************/
#define FAs6  2027,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Fs6   FAs6
#define SOLf6 FAs6
#define Gf6   FAs6
/******************************************************************************/
#define SOL6  1913,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define G6    SOL6
/******************************************************************************/
#define SOLs6 1825,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define Gs6   SOLs6
#define LAf6  SOLs6
#define Af6   SOLs6
/******************************************************************************/
#define LA6   1704,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define A6    LA6
/******************************************************************************/
#define LAs6  1608,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define As6   LAs6
#define SIf6  LAs6
#define Bf6   LAs6
/******************************************************************************/
#define SI6   1518,  TIMER_A_CLOCKSOURCE_DIVIDER_1
#define B6    SI6
#define DOf7  SI6
#define Cf7   SI6

/**
 * Frequency struct - it describes the properties of a single note
 *
 * @clock: variable that sets the value the buzzer will play
 * @divider: variable that sets the clock divider
 */
typedef struct Frequency {
    uint_fast16_t clock;
    uint_fast16_t divider;
} Frequency_t;

/******************************************************************************
*                               TEMPO MULTIPLIERS                             *
******************************************************************************/
#define QUARTER          1
#define HALF             2
#define WHOLE            4
#define DOUBLE           8
#define EIGHTH           0.5
#define SIXTEENTH        0.25
#define THIRTYSECOND     0.125
#define QUARTER_DOT      1.5
#define HALF_DOT         3
#define WHOLE_DOT        6
#define EIGHTH_DOT       0.75
#define SIXTEENTH_DOT    0.375
#define THIRTYSECOND_DOT 0.1875
#define QUARTER_DOT_DOT  1.75
#define HALF_DOT_DOT     3.5
#define EIGHTH_DOT_DOT   0.875

/**
 * Note struct - the single element that composes a song
 *
 * @frequency: variable that defines the note itself (so its frequency)
 * @tempo: variable that defines the duration of the note
 */
typedef struct Note {
    Frequency_t frequency;
    float tempo;
} Note_t;

/******************************************************************************
*                               TEMPO SIGNATURES                              *
******************************************************************************/
#define TEMPO_UPPERBOUND 8191
#define ULTRA_SLOW       8000
#define VERY_SLOW        7000
#define SLOW             6000
#define MEDIUM           5000
#define FAST             4000
#define VERY_FAST        3000
#define ULTRA_FAST       2000
#define SUPERSONIC       1000

/******************************************************************************
*                               VOLUME SETTINGS                               *
******************************************************************************/
#define PIANISSIMO       1.0f
#define PIANO            2.0f
#define MODERATO         4.0f
#define FORTE            17.5f
#define FORTISSIMO       30.0f

/**
 * Note_config struct - it defines the rhythm of groups of notes
 *
 * @index: variable that indicates the beginning of the group
 * @tempo: variable that defines the notes' duration of the group we are considering
 * @volume: variable that defines the volume of the group we are considering
 */
typedef struct Note_config {
    uint_fast16_t index;
    uint_fast16_t tempo;
    float volume;
} Note_config_t;

/**
 * Initializes the specific hardware (like peripherals, clocks, timers) of the embedded system for playing songs with the buzzer.
 */
void _musicLibInit();

/**
 * The main function of the library.
 * Given a song, a precise config of that song and how many times (repetition) the user wants to hear that song, it plays the melody.
 */
void playSong(const Note_t *song, const Note_config_t *config, const uint_fast16_t repetition);

#endif /* MUSICLIB_H_ */
