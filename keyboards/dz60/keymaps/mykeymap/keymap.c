#include QMK_KEYBOARD_H

enum layers {
  _JP,
  _US,
  _FN,
  _ADJ
};

enum keycodes {
  MY_USZH = SAFE_RANGE,// US Key (ANSI) Zenkaku-Hankaku
  LT_FN_USZH,
  COLEMAK,
  DVORAK,
  FUNC,
  FUNC2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* JP
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  | ` ~ |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift       |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |    /    |  U  | DEL |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |              Space                | RAlt | FN  |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */

  [_JP] = LAYOUT_directional(  \
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_NUBS,  KC_GRV,     \
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC,              \
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,                       \
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, _______,  RSFT_T(KC_SLSH),   KC_UP, LT(_FN,MY_USZH),  \
      MO(_FN), KC_LGUI, KC_LALT,           KC_SPC,           KC_SPC,           KC_SPC,          KC_RALT, _______, KC_LEFT, KC_DOWN, KC_RGHT      \
      ),

  /* US
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  | ` ~ |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   BS   |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift       |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |Tap(/)Sft|  U  | FN  |
   * |-----------------------------------------------------------------------------------------+
   * | FN   |  Cmd  |  Alt  |              Space                 |     |     |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */

  [_US] = LAYOUT_directional(  \
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_NUBS,  KC_GRV,     \
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC,              \
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,                       \
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, _______,  RSFT_T(KC_SLSH),   KC_UP, LT(_FN,MY_USZH),  \
      MO(_FN), KC_LGUI, KC_LALT,           KC_SPC,           KC_SPC,           KC_SPC,          KC_RALT, _______, KC_LEFT, KC_DOWN, KC_RGHT      \
      ),

  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 | Ins | Del |
   * |-----------------------------------------------------------------------------------------+
   * |        |     | PGUP|     |     |     |     |     |     |     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         | HOME| PGDN| END |     |     |     |  L  |  D  |  U  |  R  |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     | ADJ |     |     |     |     |     |     | MUP |     |
   * |-----------------------------------------------------------------------------------------+
   * |      | LCLICK| RCLICK|               ENTER               |     |      |MLEFT|MDOWN|MRGHT|
   * `-----------------------------------------------------------------------------------------'
   */

  [_FN] = LAYOUT_directional(
   //,-----------------------------------------------------------------------------------------.
   //| Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 | Ins | Del |
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,     \
      _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______,              \
      _______, BL_TOGG, BL_STEP,  BL_INC,  BL_DEC, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______, _______,                       \
      _______         , KC_BTN1, KC_BTN3, KC_BTN2, _______,TG(_ADJ), _______, _______, _______, _______, _______, _______, KC_MS_U, _______,     \
      _______, _______, _______,           KC_ENT,           KC_ENT,           KC_ENT,          _______, _______, KC_MS_L, KC_MS_D, KC_MS_R      \
      ),

  /* ADJUST Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 | Ins | Del |
   * |-----------------------------------------------------------------------------------------+
   * |        |RBB T|RGB M| Hue+| Hue-| Sat+| Sat-| Val+| Val-|     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         | BL T| BL M| BL+ | BL- |     |     |  L  |  D  |  U  |  R  |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |DF(J)|DF(U)|     |     |     |     |     |     |     |     |     | PGUP|     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |     |      | HOME| PGDN| END |
   * `-----------------------------------------------------------------------------------------'
   */

  [_ADJ] = LAYOUT_directional(  \
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,     \
      _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______,              \
      _______, BL_TOGG, BL_STEP,  BL_INC,  BL_DEC, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______, _______,                       \
      _______         , DF(_JP), DF(_US), TG(_JP), TG(_US), _______, _______, _______, _______, _______, _______, _______, _______, _______,     \
      _______, _______, _______,          _______,          _______,          _______,          _______, _______, _______, _______, _______      \
      )
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool is_tapped = ((!record->event.pressed) && (keycode == prev_keycode));
  switch (keycode) {
    case MY_USZH:
      if (record->event.pressed) {
        // Do something when pressed
        register_code(KC_RALT);
        register_code(KC_GRV);
      } else {
        // Do something else when release
        unregister_code(KC_GRV);
        unregister_code(KC_RALT);
      }
      return false; // Skip all further processing of this key
    case LT_FN_USZH:
      if (record->event.pressed) {
        layer_on(_FN);
      } else {
        layer_off(_FN);
        if (is_tapped) {
          tap_code(MY_USZH);
        }
        // Do something else when release
        // unregister_code(KC_GRV);
        // unregister_code(KC_RALT);
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}
