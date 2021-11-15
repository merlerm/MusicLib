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

#ifndef SONGSAMPLES_H_ /* SONGSAMPLES_H_ */
#define SONGSAMPLES_H_ /* SONGSAMPLES_H_ */

#include <musicLib.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/devices/msp432p4xx/inc/msp.h>
#include <stdint.h>

/* Basic Chromatic scale, useful to test out all the notes predefined in the library */
const Note_t CHROMATIC[] = {
    { DO2, QUARTER }, { DOs2, QUARTER }, { RE2, QUARTER }, { REs2, QUARTER }, { MI2, QUARTER }, { FA2, QUARTER }, { FAs2, QUARTER }, { SOL2, QUARTER }, { SOLs2, QUARTER }, { LA2, QUARTER }, { LAs2, QUARTER }, { SI2, QUARTER },
    { DO3, QUARTER }, { DOs3, QUARTER }, { RE3, QUARTER }, { REs3, QUARTER }, { MI3, QUARTER }, { FA3, QUARTER }, { FAs3, QUARTER }, { SOL3, QUARTER }, { SOLs3, QUARTER }, { LA3, QUARTER }, { LAs3, QUARTER }, { SI3, QUARTER },
    { DO4, QUARTER }, { DOs4, QUARTER }, { RE4, QUARTER }, { REs4, QUARTER }, { MI4, QUARTER }, { FA4, QUARTER }, { FAs4, QUARTER }, { SOL4, QUARTER }, { SOLs4, QUARTER }, { LA4, QUARTER }, { LAs4, QUARTER }, { SI4, QUARTER },
    { DO5, QUARTER }, { DOs5, QUARTER }, { RE5, QUARTER }, { REs5, QUARTER }, { MI5, QUARTER }, { FA5, QUARTER }, { FAs5, QUARTER }, { SOL5, QUARTER }, { SOLs5, QUARTER }, { LA5, QUARTER }, { LAs5, QUARTER }, { SI5, QUARTER },
    { DO6, QUARTER }, { DOs6, QUARTER }, { RE6, QUARTER }, { REs6, QUARTER }, { MI6, QUARTER }, { FA6, QUARTER }, { FAs6, QUARTER }, { SOL6, QUARTER }, { SOLs6, QUARTER }, { LA6, QUARTER }, { LAs6, QUARTER }, { SI6, QUARTER },
    { END, 0 }
};

const Note_config_t CHROMATIC_CONFIG[] = {
    { 1, FAST, PIANO },
    { END_CONFIG, 0, 0 }
};

/* Main Theme from Pirates of the Caribbean  */
const Note_t PIRATES[] = {
    { PAUSE, HALF }, { PAUSE, EIGHTH }, { LA3, SIXTEENTH }, { DO4, SIXTEENTH }, { RE4, EIGHTH }, { RE4, EIGHTH }, { RE4, SIXTEENTH }, { MI4, SIXTEENTH }, { FA4, EIGHTH }, { FA4, EIGHTH }, { FA4, SIXTEENTH }, { SOL4, SIXTEENTH }, { MI4, EIGHTH }, { MI4, EIGHTH }, { RE4, SIXTEENTH }, { DO4, SIXTEENTH }, { DO4, SIXTEENTH }, { RE4, EIGHTH },
    { PAUSE, HALF }, { PAUSE, EIGHTH }, { LA3, SIXTEENTH }, { DO4, SIXTEENTH }, { RE4, EIGHTH }, { RE4, EIGHTH }, { RE4, SIXTEENTH }, { MI4, SIXTEENTH }, { FA4, EIGHTH }, { FA4, EIGHTH }, { FA4, SIXTEENTH }, { SOL4, SIXTEENTH }, { MI4, EIGHTH }, { MI4, EIGHTH }, { RE4, SIXTEENTH }, { DO4, SIXTEENTH }, { RE4, EIGHTH }, { PAUSE, EIGHTH },
    { LA3, SIXTEENTH }, { DO4, SIXTEENTH }, { RE4, EIGHTH }, { RE4, EIGHTH }, { RE4, SIXTEENTH }, { FA4, SIXTEENTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, SIXTEENTH }, { LA4, SIXTEENTH }, { SIf4, EIGHTH }, { SIf4, EIGHTH }, { LA4, SIXTEENTH }, { SOL4, SIXTEENTH }, { LA4, SIXTEENTH }, { RE4, EIGHTH },
    { PAUSE, SIXTEENTH }, { RE4, SIXTEENTH }, { MI4, SIXTEENTH }, { FA4, EIGHTH }, { FA4, EIGHTH }, { SOL4, EIGHTH }, { LA4, SIXTEENTH }, { RE4, EIGHTH },
    { PAUSE, SIXTEENTH }, { RE4, SIXTEENTH }, { FA4, SIXTEENTH }, { MI4, EIGHTH }, { MI4, EIGHTH }, { RE4, SIXTEENTH }, { DOs4, SIXTEENTH }, { RE4, EIGHTH }, { PAUSE, EIGHTH },
    { PAUSE, QUARTER_DOT }, { RE3, SIXTEENTH }, { RE3, SIXTEENTH }, { FA3, SIXTEENTH }, { FA3, SIXTEENTH }, { LA3, SIXTEENTH }, { LA3, SIXTEENTH }, { RE4, EIGHTH }, { RE4, SIXTEENTH }, { MI4, SIXTEENTH }, { FA4, SIXTEENTH }, { RE4, SIXTEENTH }, { MI4, EIGHTH }, { RE4, EIGHTH }, { DO4, EIGHTH },
    { RE4, EIGHTH }, { RE4, SIXTEENTH }, { MI4, SIXTEENTH }, { FA4, SIXTEENTH }, { RE4, SIXTEENTH }, { MI4, EIGHTH }, { FA4, EIGHTH }, { SOL4, EIGHTH },
    { SOL4, EIGHTH }, { SOL4, SIXTEENTH }, { LA4, SIXTEENTH }, { SIf4, SIXTEENTH }, { RE4, SIXTEENTH }, { FA4, EIGHTH }, { MI4, EIGHTH }, { RE4, EIGHTH }, { MI4, EIGHTH }, { RE4, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH },
    { LA4, QUARTER }, { PAUSE, EIGHTH }, { SIf4, QUARTER }, { PAUSE, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH }, { LA4, SIXTEENTH }, { SOL4, EIGHTH }, { PAUSE, EIGHTH_DOT },
    { SOL4, QUARTER }, { PAUSE, EIGHTH }, { FA4, QUARTER }, { PAUSE, EIGHTH }, { MI4, EIGHTH }, { FA4, EIGHTH }, { MI4, EIGHTH }, { RE4, QUARTER }, { PAUSE, EIGHTH },
    { END, 0 }
};

const Note_config_t PIRATES_CONFIG[] = {
    { 1, MEDIUM, PIANISSIMO }, { 38, MEDIUM, PIANO },
    { 71, FAST, MODERATO }, { 107, FAST, FORTE },
    { END_CONFIG, 0, 0 }
};

/* Main Theme/Travelers Theme from Outer Wilds (composed by Andrew Phralow) */
const Note_t OUTER_WILDS[] = {
    { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH }, { DO3, EIGHTH }, { SOL3, EIGHTH },
    { DO4, QUARTER }, { DO4, QUARTER }, { SI3, QUARTER }, { DO4, QUARTER }, { DO4, QUARTER }, { DO4, EIGHTH }, { SI3, EIGHTH }, { SI3, EIGHTH_DOT }, { DO4, SIXTEENTH }, { DO4, QUARTER },
    { DO4, QUARTER }, { DO4, QUARTER }, { SI3, QUARTER }, { DO4, QUARTER }, { DO4, QUARTER }, { DO4, EIGHTH }, { SI3, EIGHTH }, { SI3, EIGHTH_DOT }, { DO4, SIXTEENTH }, { DO4, QUARTER },
    { DO4, QUARTER }, { SOL4, QUARTER }, { SI4, QUARTER_DOT }, { SOL4, EIGHTH }, { DO5, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SOL4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH }, { SOL4, QUARTER },
    { RE4, QUARTER }, { SOL4, QUARTER }, { SI4, QUARTER_DOT }, { SOL4, EIGHTH }, { DO5, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SOL4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH }, { RE5, EIGHTH }, { SI4, EIGHTH },
    { MI4, QUARTER }, { SOL4, QUARTER }, { SI4, QUARTER_DOT }, { SOL4, EIGHTH }, { DO5, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SOL4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH }, { SOL4, QUARTER },
    { RE4, QUARTER }, { SOL4, QUARTER }, { SI4, QUARTER_DOT }, { SOL4, EIGHTH }, { DO5, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SOL4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH }, { RE5, EIGHTH }, { SI4, EIGHTH },
    { END, 0 }
};

const Note_config_t OUTER_WILDS_CONFIG[] = {
    { 1, FAST, PIANO },
    { END_CONFIG, 0, 0 }
};

/* Gandalf Sax Meme */
const Note_t GANDALF_SAX[] = {
    { SI4, QUARTER }, { PAUSE, QUARTER }, { SI4, EIGHTH }, { SI4, SIXTEENTH }, { SI4, SIXTEENTH }, { LA5, SIXTEENTH }, { SI4, EIGHTH }, { PAUSE, SIXTEENTH },
    { SI4, QUARTER }, { PAUSE, QUARTER }, { SI4, EIGHTH }, { SI4, SIXTEENTH }, { SI4, SIXTEENTH }, { LA5, SIXTEENTH }, { SI4, EIGHTH }, { PAUSE, SIXTEENTH }, { SI4, QUARTER }, { PAUSE, EIGHTH },
    { RE5, QUARTER }, { SI4, QUARTER }, { LA4, QUARTER }, { SOL4, QUARTER },
    { MI4, EIGHTH }, { MI4, EIGHTH }, { FAs4, EIGHTH }, { SOL4, EIGHTH }, { MI4, EIGHTH },
    { END, 0 }
};

const Note_config_t GANDALF_SAX_CONFIG[] = {
    { 1, VERY_FAST, FORTE },
    { END_CONFIG, 0, 0 }
};

/* Call me Maybe by Carly Rae Jepsen */
const Note_t CALL_ME_MAYBE[] = {
    { PAUSE, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH },
    { PAUSE, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH },
    { PAUSE, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH },
    { PAUSE, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { RE5, QUARTER }, { SI4, EIGHTH },
    { PAUSE, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH },
    { PAUSE, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH },
    { PAUSE, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH },
    { PAUSE, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { RE5, QUARTER }, { SI4, EIGHTH },
    { PAUSE, QUARTER }, { RE5, QUARTER }, { RE5, EIGHTH }, { SI4, SIXTEENTH }, { LA4, EIGHTH_DOT }, { SOL4, EIGHTH },
    { RE5, QUARTER }, { RE5, QUARTER }, { RE5, EIGHTH }, { SI4, SIXTEENTH }, { LA4, EIGHTH_DOT }, { SOL4, EIGHTH },
    { RE5, QUARTER }, { RE5, QUARTER }, { RE5, EIGHTH }, { SI4, SIXTEENTH }, { LA4, EIGHTH_DOT }, { SOL4, EIGHTH },
    { SOL4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { SOL4, EIGHTH }, { LA4, EIGHTH }, { SI4, EIGHTH },
    { PAUSE, QUARTER }, { SOL4, QUARTER }, { SI3, SIXTEENTH }, { RE4, EIGHTH }, { SOL4, EIGHTH }, { RE4, QUARTER },
    { PAUSE, QUARTER_DOT }, { SI3, EIGHTH },  { SI3, EIGHTH }, { RE4, EIGHTH }, { SI4, EIGHTH_DOT }, { SOL4, QUARTER },
    { PAUSE, QUARTER_DOT }, { SOL4, EIGHTH }, { SI4, EIGHTH }, { DO5, EIGHTH }, { SI4, EIGHTH }, { SOL4, QUARTER },
    { PAUSE, QUARTER_DOT }, { SOL4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH }, { SOL4, QUARTER },
    { PAUSE, QUARTER }, { SOL4, QUARTER }, { SI3, SIXTEENTH }, { RE4, EIGHTH }, { SOL4, EIGHTH }, { RE4, QUARTER },
    { PAUSE, QUARTER_DOT }, { SI3, EIGHTH }, { RE4, EIGHTH }, { SI4, EIGHTH_DOT }, { SOL4, QUARTER },
    { PAUSE, QUARTER_DOT }, { SOL4, EIGHTH }, { SI4, EIGHTH }, { DO5, EIGHTH }, { SI4, EIGHTH }, { SOL4, QUARTER },
    { PAUSE, QUARTER_DOT }, { SOL4, EIGHTH }, { SI4, EIGHTH }, { LA4, EIGHTH }, { LA4, EIGHTH }, { SOL4, QUARTER },
    { END, 0 }
};

const Note_config_t CALL_ME_MAYBE_CONFIG[] = {
    { 1, VERY_FAST, PIANO }, { 63, VERY_FAST, MODERATO }, { 79, VERY_FAST, FORTISSIMO }, { 87, VERY_FAST, FORTE },
    { END_CONFIG, 0, 0 }
};

/* Super Mario Bros. Overworld Theme (composed by Koji Kondo) */
const Note_t SUPER_MARIO[] = {
    { MI4, EIGHTH }, { MI4, EIGHTH }, { PAUSE, EIGHTH }, { MI4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { MI4, EIGHTH }, { PAUSE, EIGHTH }, { SOL4, QUARTER }, { PAUSE, QUARTER }, { SOL3, QUARTER }, { PAUSE, QUARTER },
    { DO4, QUARTER }, { PAUSE, EIGHTH }, { SOL3, QUARTER }, { PAUSE, EIGHTH }, { MI3, QUARTER }, { PAUSE, EIGHTH }, { LA3, QUARTER }, { SI3, QUARTER }, { SIf3, EIGHTH }, { LA3, QUARTER },
    { SOL3, 0.66f }, { DO4, 0.66f }, { SOL4, 0.66f }, { LA4, QUARTER }, { FA4, EIGHTH }, { SOL4, EIGHTH }, { PAUSE, EIGHTH }, { MI4, QUARTER }, { DO4, EIGHTH }, { RE4, EIGHTH }, { SI3, QUARTER }, { PAUSE, EIGHTH },
    { DO4, QUARTER }, { PAUSE, EIGHTH }, { SOL3, QUARTER }, { PAUSE, EIGHTH }, { MI3, QUARTER }, { PAUSE, EIGHTH }, { LA3, QUARTER }, { SI3, QUARTER }, { SIf3, EIGHTH }, { LA3, QUARTER },
    { SOL3, 0.66f }, { DO4, 0.66f }, { SOL4, 0.66f }, { LA4, QUARTER }, { FA4, EIGHTH }, { SOL4, EIGHTH }, { PAUSE, EIGHTH }, { MI4, QUARTER }, { DO4, EIGHTH }, { RE4, EIGHTH }, { SI3, QUARTER }, { PAUSE, EIGHTH },
    { PAUSE, QUARTER }, { SOL4, EIGHTH }, { FAs4, EIGHTH }, { FA4, EIGHTH }, { REs4, QUARTER }, { MI4, EIGHTH }, { PAUSE, EIGHTH }, { SOLs3, EIGHTH }, { LA3, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { LA3, EIGHTH }, { DO4, EIGHTH }, { RE4, EIGHTH },
    { PAUSE, QUARTER }, { SOL4, EIGHTH }, { FAs4, EIGHTH }, { FA4, EIGHTH }, { REs4, QUARTER }, { MI4, EIGHTH }, { PAUSE, EIGHTH }, { DO5, QUARTER }, { DO5, EIGHTH }, { DO5, QUARTER }, { PAUSE, QUARTER },
    { PAUSE, QUARTER }, { SOL4, EIGHTH }, { FAs4, EIGHTH }, { FA4, EIGHTH }, { REs4, QUARTER }, { MI4, EIGHTH }, { PAUSE, EIGHTH }, { SOLs3, EIGHTH }, { LA3, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { LA3, EIGHTH }, { DO4, EIGHTH }, { RE4, EIGHTH },
    { PAUSE, QUARTER }, { MIf4, QUARTER }, { PAUSE, EIGHTH }, { RE4, QUARTER }, { PAUSE, EIGHTH }, { DO4, QUARTER }, { PAUSE, HALF_DOT },
    { DO4, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { RE4, QUARTER }, { MI4, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { LA3, EIGHTH }, { SOL3, QUARTER_DOT }, { PAUSE, EIGHTH },
    { DO4, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { RE4, EIGHTH }, { MI4, EIGHTH }, { PAUSE, WHOLE },
    { DO4, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { DO4, EIGHTH }, { RE4, QUARTER }, { MI4, EIGHTH }, { DO4, EIGHTH }, { PAUSE, EIGHTH }, { LA3, EIGHTH }, { SOL3, QUARTER_DOT }, { PAUSE, EIGHTH },
    { END, 0 }
};

const Note_config_t SUPER_MARIO_CONFIG[] = {
    { 1, ULTRA_FAST, PIANISSIMO },
    { END_CONFIG, 0, 0 }
};

#endif /* SONGSAMPLES_H_ */
