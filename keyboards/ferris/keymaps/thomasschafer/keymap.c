#include QMK_KEYBOARD_H

enum {
  TD_TILD_LSFT = 0,
  TD_UNDS_LALT,
  TD_PLUS_LGUI,
  TD_DQUO_RGUI,
  TD_PIPE_RALT,
  TD_LCBR_RCTL,
  TD_RCBR_RSFT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
		KC_Q, KC_W, KC_E, KC_R, KC_T,
		KC_Y, KC_U, KC_I, KC_O, KC_P,

		LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,
		KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), LSFT_T(KC_SCLN),

		LT(5,KC_Z), KC_X, KC_C, KC_V, KC_B,
		KC_N, KC_M, KC_COMM, KC_DOT, LT(4,KC_SLSH),

		MT(MOD_MEH, KC_DEL), LT(1,KC_BSPC),
		LT(2,KC_SPC), LT(3,KC_ENT)
	),
	[1] = LAYOUT_split_3x5_2(
		KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,
		KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,

		TD(TD_TILD_LSFT), KC_LCTL, TD(TD_UNDS_LALT), TD(TD_PLUS_LGUI), KC_NO,
		KC_NO, TD(TD_DQUO_RGUI), TD(TD_PIPE_RALT), TD(TD_LCBR_RCTL), TD(TD_RCBR_RSFT),

		KC_GRV, LGUI(KC_GRV), KC_MINS, KC_EQL, KC_NO,
		KC_NO, KC_QUOT, KC_BSLS, KC_LBRC, KC_RBRC,

		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
	),
	[2] = LAYOUT_split_3x5_2(
		KC_1, KC_2, KC_3, KC_4, KC_5,
		KC_6, KC_7, KC_8, KC_9, KC_0,

		LSFT_T(KC_NO), LCTL_T(KC_NO), LALT_T(KC_NO), LGUI_T(KC_NO), KC_NO,
		KC_NO, RGUI_T(KC_NO), RALT_T(KC_NO), RCTL_T(KC_NO), RSFT_T(KC_NO),

		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
	),
	[3] = LAYOUT_split_3x5_2(
		KC_ESC, KC_NO, KC_UP, KC_NO, KC_NO,
		KC_TRNS, KC_PGDN, KC_PGUP, KC_NO, KC_NO,

		LSFT_T(KC_TAB), LCTL_T(KC_LEFT), LALT_T(KC_DOWN), LGUI_T(KC_RGHT), KC_NO,
		KC_LEFT, RGUI_T(KC_DOWN), RALT_T(KC_UP), RCTL_T(KC_RGHT), RSFT_T(KC_NO),

		KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
	),
	[4] = LAYOUT_split_3x5_2(
		KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,

		LSFT_T(KC_NO), KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,
		KC_MUTE, RGUI_T(KC_MNXT), RALT_T(KC_VOLU), RCTL_T(KC_BRIU), RSFT_T(KC_NO),

		KC_NO, KC_NO, KC_BTN2, KC_BTN1, KC_NO,
		KC_MPLY, KC_MPRV, KC_VOLD, KC_BRID, KC_NO,

		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
	),
	[5] = LAYOUT_split_3x5_2(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
		KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

		LSFT_T(KC_F11), LCTL_T(KC_F12), LALT_T(KC_NO), LGUI_T(KC_NO), KC_NO,
		KC_NO, RGUI_T(KC_NO), RALT_T(KC_NO), RCTL_T(KC_NO), RSFT_T(KC_NO),

		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
	)
};

void dance_tild_lsft_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_TILD);
  } else {
    register_code(KC_LSFT);
  }
}

void dance_tild_lsft_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_TILD);
  } else {
    unregister_code(KC_LSFT);
  }
}


void dance_unds_lalt_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_UNDS);
  } else {
    register_code(KC_LALT);
  }
}

void dance_unds_lalt_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_UNDS);
  } else {
    unregister_code(KC_LALT);
  }
}

void dance_plus_lgui_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_PLUS);
  } else {
    register_code(KC_LGUI);
  }
}

void dance_plus_lgui_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_PLUS);
  } else {
    unregister_code(KC_LGUI);
  }
}

void dance_dquo_rgui_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_DQUO);
  } else {
    register_code(KC_RGUI);
  }
}

void dance_dquo_rgui_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_DQUO);
  } else {
    unregister_code(KC_RGUI);
  }
}

void dance_pipe_ralt_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_PIPE);
  } else {
    register_code(KC_RALT);
  }
}

void dance_pipe_ralt_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_PIPE);
  } else {
    unregister_code(KC_RALT);
  }
}

void dance_lcbr_rctl_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_LCBR);
  } else {
    register_code(KC_RCTL);
  }
}

void dance_lcbr_rctl_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_LCBR);
  } else {
    unregister_code(KC_RCTL);
  }
}

void dance_rcbr_rsft_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code16(KC_RCBR);
  } else {
    register_code(KC_RSFT);
  }
}

void dance_rcbr_rsft_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code16(KC_RCBR);
  } else {
    unregister_code(KC_RSFT);
  }
}

tap_dance_action_t tap_dance_actions[] = {
  [TD_TILD_LSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_tild_lsft_finished, dance_tild_lsft_reset),
  [TD_UNDS_LALT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_unds_lalt_finished, dance_unds_lalt_reset),
  [TD_PLUS_LGUI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_plus_lgui_finished, dance_plus_lgui_reset),
  [TD_DQUO_RGUI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_dquo_rgui_finished, dance_dquo_rgui_reset),
  [TD_PIPE_RALT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_pipe_ralt_finished, dance_pipe_ralt_reset),
  [TD_LCBR_RCTL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_lcbr_rctl_finished, dance_lcbr_rctl_reset),
  [TD_RCBR_RSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_rcbr_rsft_finished, dance_rcbr_rsft_reset),
};
