/*
Copyright 2022 sporewoh

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

enum custom_keycodes {
    MACRO_10_LEFT = SAFE_RANGE,
    MACRO_10_RIGHT,
    MACRO_10_UP,
    MACRO_10_DOWN,
    MACRO_10_BACKSPACE,
    MACRO_10_DELETE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MACRO_10_LEFT:
            if (record->event.pressed) {
                for (int i = 0; i < 10; i++) {
                    tap_code(KC_LEFT);
                }
            }
            return false;
        case MACRO_10_RIGHT:
            if (record->event.pressed) {
                for (int i = 0; i < 10; i++) {
                    tap_code(KC_RIGHT);
                }
            }
            return false;
        case MACRO_10_UP:
            if (record->event.pressed) {
                for (int i = 0; i < 10; i++) {
                    tap_code(KC_UP);
                }
            }
            return false;
        case MACRO_10_DOWN:
            if (record->event.pressed) {
                for (int i = 0; i < 10; i++) {
                    tap_code(KC_DOWN);
                }
            }
            return false;
        case MACRO_10_BACKSPACE:
            if (record->event.pressed) {
                for (int i = 0; i < 10; i++) {
                    tap_code(KC_BSPC);
                }
            }
            return false;
        case MACRO_10_DELETE:
            if (record->event.pressed) {
                for (int i = 0; i < 10; i++) {
                    tap_code(KC_DEL);
                }
            }
            return false;
        default:
            return true;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_ortho_4x10(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,

                                                                                      LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), LSFT_T(KC_SCLN),

                                                                                      LT(5, KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, LT(4, KC_SLSH),

                                                                                      KC_NO, KC_NO, KC_NO, MT(MOD_MEH, KC_CAPS), LT(1, KC_BSPC), LT(2, KC_SPC), LT(3, KC_ENT), KC_NO, KC_NO, KC_NO),
                                                              [1] = LAYOUT_ortho_4x10(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,

                                                                                      LSFT_T(KC_GRV), KC_LCTL, LALT_T(KC_MINS), LGUI_T(KC_EQL), KC_NO, KC_NO, RGUI_T(KC_QUOT), RALT_T(KC_BSLS), RCTL_T(KC_LBRC), RSFT_T(KC_RBRC),

                                                                                      KC_TILD, LGUI(KC_GRV), KC_UNDS, KC_PLUS, KC_NO, KC_NO, KC_DQUO, KC_PIPE, KC_LCBR, KC_RCBR,

                                                                                      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
                                                              [2] = LAYOUT_ortho_4x10(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,

                                                                                      LSFT_T(KC_NO), LCTL_T(KC_NO), LALT_T(KC_NO), LGUI_T(KC_NO), KC_NO, KC_NO, RGUI_T(KC_NO), RALT_T(KC_NO), RCTL_T(KC_NO), RSFT_T(KC_NO),

                                                                                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                                                                      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
                                                              [3] = LAYOUT_ortho_4x10(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_NO,

                                                                                      LSFT_T(KC_TAB), LCTL_T(KC_LEFT), LALT_T(KC_UP), LGUI_T(KC_DOWN), KC_RGHT, KC_LEFT, RGUI_T(KC_DOWN), RALT_T(KC_UP), RCTL_T(KC_RGHT), RSFT_T(KC_NO),

                                                                                      KC_CAPS, MACRO_10_LEFT, MACRO_10_UP, MACRO_10_DOWN, MACRO_10_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                                                                      KC_NO, KC_NO, KC_NO, MACRO_10_DELETE, MACRO_10_BACKSPACE, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
                                                              [4] = LAYOUT_ortho_4x10(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,

                                                                                      LSFT_T(KC_NO), KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_MUTE, RGUI_T(KC_MNXT), RALT_T(KC_VOLU), RCTL_T(KC_BRIU), RSFT_T(KC_NO),

                                                                                      KC_NO, KC_NO, KC_BTN2, KC_BTN1, KC_NO, KC_MPLY, KC_MPRV, KC_VOLD, KC_BRID, KC_NO,

                                                                                      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
                                                              [5] = LAYOUT_ortho_4x10(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
                                                                                        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

                                                                                        LSFT_T(KC_F11), LCTL_T(KC_F12), LALT_T(KC_NO), LGUI_T(KC_NO), KC_NO,
                                                                                        KC_NO, RGUI_T(KC_NO), RALT_T(KC_NO), RCTL_T(KC_NO), RSFT_T(KC_NO),

                                                                                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                                                                        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,
                                                                                        KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = true;
    // debug_mouse=true;
}
