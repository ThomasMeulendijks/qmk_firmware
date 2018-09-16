#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};
#define KC_ KC_TRNS
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define KC_BR_BACK LALT(KC_LEFT)           // Browser Back
#define KC_BR_FORW LALT(KC_RIGHT)          // Browser Forward
#define KC_BR_CT LCTL(KC_W) // Browser close
#define KC_BR_NT LSFT(LCTL(KC_TAB)) //Browser next tab
#define KC_BR_PT LCTL(KC_TAB) //Browser prev tab

#define KC_ENTS LSFT_T(KC_ENT) // Shift (hold), Enter (tap)
#define KC_ESCG LGUI_T(KC_ESC) // GUI (hold), Escape (tab)
#define KC_ESCC LCTL_T(KC_ESC)    // Control (hold), Escape (tap)
#define KC_TABL LT(LOWER, KC_TAB) // LOWER (hold), tab (tap)
#define KC_DELR LT(RAISE, KC_DEL) // RAISE (hold), DEL (tap)
#define KC_SPCC LCTL_T(KC_SPC) // Control (hold) , Space (tap)
#define KC_BSPCA LALT_T(KC_BSPC) // ALT (hold) , backspace (tap)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX,                    XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX, 
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,  XXXXXXX,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                 KC_TABL,  KC_ESCG, KC_SPCC,          KC_BSPCA, KC_ENTS, KC_DELR
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
),
[_RAISE] = LAYOUT(
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX,                    XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX, 
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_AT,    KC_HASH, KC_DLR, KC_PERC, KC_CIRC,                    KC_PLUS, KC_7,    KC_8,    KC_9   , KC_0   ,XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_TILD, KC_PIPE ,KC_MINS ,KC_EXLM, KC_QUOT,                    KC_MINS, KC_4,    KC_5,    KC_6   , KC_EQL ,XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_GRV,  KC_BSLS,KC_UNDS ,KC_PERC, KC_DQT, _______,  _______, KC_ASTR,   KC_1,    KC_2,    KC_3   , _______,XXXXXXX,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                 MO(ADJUST), _______,_______,           _______, _______, _______
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
),
[_LOWER] = LAYOUT(
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,                    KC_LPRN, KC_RPRN, KC_HOME, KC_PGUP, _______, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, _______,  KC_LEFT,KC_DOWN ,KC_UP  ,KC_RIGHT,                    KC_LCBR, KC_RCBR, KC_END, KC_PGDOWN, _______, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,  _______, KC_LCBR, KC_RCBR, _______, _______, _______, _______,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                  _______, _______, _______,           _______,  _______,MO(ADJUST)
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
),
[_ADJUST] = LAYOUT(
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,     KC_F10, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, KC_F12, _______, _______, _______, _______,                    _______, _______, _______,  _______,   KC_F11, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                  _______, _______, _______,           _______, _______, _______
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
