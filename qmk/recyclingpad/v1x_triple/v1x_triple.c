/* Copyright 2022 deveth0
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "v1x_triple.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise)
{
    if (!encoder_update_user(index, clockwise))
    {
        return false;
    }
    switch (index)
    {
    case 0:
        // encoder 0, volume
        if (clockwise)
        {
            tap_code(KC_VOLU);
        }
        else
        {
            tap_code(KC_VOLD);
        }
        break;
    case 1:
        // encoder 1, vertical scroll
        if (clockwise)
        {

            tap_code(KC_PGDN);
        }
        else
        {
            tap_code(KC_PGUP);
        }
        break;
    case 2:
        // encoder 2, horizontal scroll
        if (clockwise)
        {
            tap_code(KC_UP);
        }
        else
        {
            tap_code(KC_DOWN);
        }
        break;
    }
    return true;
}
#endif
