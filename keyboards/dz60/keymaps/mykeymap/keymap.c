#include QMK_KEYBOARD_H

enum layers {
  _JP,
  _JP_SHIFT,
  _US,
  _FN,
  _ADJ,
};

enum keycodes {
  L_DF_JP = SAFE_RANGE,
  L_DF_US,
  LT_FN_USZH,
  MY_USZH// US Key (ANSI) Zenkaku-Hankaku
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* JP
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  `  | BS  |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |   \    |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl    |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift       |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |  Shift  | FN  |
   * |-----------------------------------------------------------------------------------------+
   * |  FN  |  Cmd  |  Alt  |              Space                 | RAlt  | APP  | RCmd |  Z/H  |
   * `-----------------------------------------------------------------------------------------'
   */

  [_JP] = LAYOUT_directional(  \
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,S(KC_MINS), S(KC_LBRC), KC_BSPC,  \
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_RBRC, KC_NUHS, KC_INT3,                \
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, S(KC_7),  KC_ENT,                         \
      MO(_JP_SHIFT),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_SLSH,   MO(_JP_SHIFT), MO(_FN),  \
      MO(_FN), KC_LGUI, KC_LALT,           KC_SPC,           KC_SPC,           KC_SPC,          KC_RALT,  KC_APP,  KC_APP, KC_RGUI, KC_GRV         \
      ), 

  /* JP_SHIFT
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |  _  |  +  |  ~   | BS |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   |    |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  :  | \"  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | _______     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | _______ | FN  |
   * |-----------------------------------------------------------------------------------------+
   * |  FN  |  Cmd  |  Alt  |              Space                 | RAlt  | APP  | RCmd |  Z/H  |
   * `-----------------------------------------------------------------------------------------'
   */

  [_JP_SHIFT] = LAYOUT_directional(  \
       S(KC_ESC), S(KC_1), KC_LBRC, S(KC_3), S(KC_4), S(KC_5),  KC_EQL, S(KC_6), S(KC_QUOT), S(KC_8), S(KC_9),S(KC_INT1),S(KC_SCLN), S(KC_EQL), KC_BSPC,   \
       S(KC_TAB), S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), S(KC_RBRC),S(KC_NUHS), S(KC_INT3),             \
      S(KC_LCTL), S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), KC_QUOT, S(KC_2), S(KC_ENT),                            \
      _______, S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M),S(KC_COMM),S(KC_DOT), S(KC_SLSH) ,S(KC_SLSH),_______ , MO(_FN),               \
      MO(_FN), S(KC_LGUI), S(KC_LALT),        S(KC_SPC),        S(KC_SPC),        S(KC_SPC),       S(KC_RALT), S(KC_APP), S(KC_APP), S(KC_RGUI), S(KC_GRV) \
      ), 


  /* US
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  `  | BS  |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift       |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift  | FN  |
   * |-----------------------------------------------------------------------------------------+
   * | FN   |  Cmd  |  Alt  |              Space                 | RAlt  | APP  | RCmd |  Z/H  |
   * `-----------------------------------------------------------------------------------------'
   */

  [_US] = LAYOUT_directional(  \
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_GRV,KC_BSPC       \
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_NUBS,              \
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,                       \
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_SLSH, KC_RSFT, MO(FN),              \
      MO(FN) , KC_LGUI, KC_LALT,           KC_SPC,           KC_SPC,           KC_SPC,          KC_RALT,  KC_APP,  KC_APP, KC_RGUI, MY_USZH      \
      ),

  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 | Ins | Del |
   * |-----------------------------------------------------------------------------------------+
   * |        |     | PGUP|     |     |     |     |     |     |     |     |      |PntScr|      |
   * |-----------------------------------------------------------------------------------------+
   * |         | HOME| PGDN| END |     |     |     |  L  |  D  |  U  |  R  |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |LClik|CClik|RClik|     | ADJ |     |     |     |     |     |     | MUP |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |               ENTER               |     |      |MLEFT|MDOWN|MRGHT|
   * `-----------------------------------------------------------------------------------------'
   */

  [_FN] = LAYOUT_directional(
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,     \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP, KC_PSCR, _______,              \
      _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_LEFT, KC_RGHT, _______,                       \
      KC_LSFT         , KC_BTN1, KC_BTN3, KC_BTN2, _______,TO(_ADJ), _______, _______, _______, _______, KC_DOWN, KC_DOWN, KC_MS_U, _______,     \
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
      _______         , L_DF_JP, L_DF_US, TO(_JP), TO(_US), _______, _______, _______, _______, _______, _______, _______, _______, _______,     \
      _______, _______, _______,          _______,          _______,          _______,          _______, _______, _______, _______, _______      \
      )
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t mem_keycode;
  uint16_t prev_keycode = mem_keycode;
  bool is_tapped = ((!record->event.pressed) && (keycode == prev_keycode));
  mem_keycode = keycode;

  switch (keycode) {
    case L_DF_JP:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_JP);
      }
      return false;
    case L_DF_US:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_US);
      }
      return false;
    case LT_FN_USZH:
      if (record->event.pressed) {
        layer_on(_FN);
      } else {
        layer_off(_FN);
        if (is_tapped) {
          register_code(KC_RALT);
          register_code(KC_GRV);
          unregister_code(KC_GRV);
          unregister_code(KC_RALT);
        }
      }
      return false; // Skip all further processing of this key
    case MY_USZH:
      if (record->event.pressed) {
        register_code(KC_RALT);
        register_code(KC_GRV);
      } else {
        unregister_code(KC_GRV);
        unregister_code(KC_RALT);
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}
