/*
Copyright 2022 imchipwood && deveth0

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
#pragma once

#include "config_common.h"

// clang-format off
/* USB Device descriptor parameter */
#define DEVICE_VER      0x0010

/* Column/Row IO definitions */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3
#define MATRIX_ROW_PINS { B3, B6, B5 }
#define MATRIX_COL_PINS { E6, B1, F7 }
#define UNUSED_PINS


/* Single rotary encoder */
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F5 }

#define ENCODER_RESOLUTION 2


/* Bootmagic - hold down rotary encoder pushbutton while plugging in to enter bootloader */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// clang-format on