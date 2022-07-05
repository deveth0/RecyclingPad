/*
Copyright 2022 deveth0

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

/**
 * NOTE: ROWS and COLs are flipped
 */

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
            BASE LAYER - Num Pad
    /-----------------------------`
    |    3    |    6    |    9    |
    |---------|---------|---------|
    |    2    |    5    |    8    |
    |---------|---------|---------|
    |    1    |    4    |    7    | 
    \---------|---------|---------|
    */
    [0] = LAYOUT(
                    KC_P3,      KC_P6,    KC_P9,             
                    KC_P2,      KC_P5,    KC_P8,             
                    KC_P1,      KC_P4,    KC_P7              
    ),
};
// clang-format on
