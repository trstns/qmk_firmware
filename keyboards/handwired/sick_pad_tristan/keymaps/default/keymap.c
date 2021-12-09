/* Copyright 2020 Joel Schneider
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

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BASE: (Base Layer) Default Layer
     * ,-------------------.
     * | NumLk | / | + | - |
     * |-------------------|
     * | 7 | 8 | 9 |   |
     * |-------------------|
     * | 4 | 5 | 6 | + |
     * |-------------------|
     * | 1 | 2 | 3 |   |
     * |-------------------|
     * | 0 (FN)| . | Enter |
     * `-------------------'
     */

    [_BASE] = LAYOUT_numpad_5x4(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6, KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,
                 LT(_FN,KC_P0),   KC_PDOT, KC_PENT
    ),

    /* Keymap _FN: (Function Layer) 
     * ,---------------------.
     * |     |     |     |   |
     * |---------------------|
     * | F19 | F20 | F21 |   |
     * |---------------------|
     * | F16 | F17 | F18 |   |
     * |---------------------|
     * | F13 | F14 | F15 |   |
     * |---------------------|
     * |     |     |     |   |
     * `---------------------'
     */

    [_FN] = LAYOUT_numpad_5x4(
        KC_NO,   KC_NO,   KC_NO,  KC_NO,
        KC_F19,  KC_F20,  KC_F21,
        KC_F16,  KC_F17,  KC_F18, KC_NO,
        KC_F13,  KC_F14,  KC_F15,
                 KC_NO,   KC_NO,  KC_NO
    )


};
