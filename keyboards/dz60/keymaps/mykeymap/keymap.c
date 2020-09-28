#include QMK_KEYBOARD_H
#include "config.h"

enum layers {
  _JP,
  _US,
  _UPPER,
  _LOWER,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base layer
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
   * │Esc   │ 1    │ 2    │ 3    │ 4    │ 5    │ 6    │ 7    │ 8    │ 9    │ 0    │ -    │ =    │ \    │ `    │
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
   * │ Tab      │ Q    │ W    │ E    │ R    │ T    │ Y    │ U    │ I    │ O    │ P    │ [    │ ]    │Bspc      │
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
   * │FnCaps      │ A    │ S    │ D    │ F    │ G    │ H    │ J    │ K    │ L    │ ;    │ '    │ Enter          │
   * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┬───┤
   * │LShift        │ Z    │ X    │ C    │ V    │ B    │ N    │ M    │ ,    │ .    │ /    │RSC   │ ↑   │Del   │
   * ├────┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┼───┤
   * │LCtl    │LGui    │LAlt    │         Space                                  │RAl   │FnL   │ ←   │ ↓   │→    │
   * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘
  */
  [_JP] = LAYOUT_directional( \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          \
    FN_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           \
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSF_RCT, KC_UP,   KC_DEL,  \
    KC_LCTL, KC_LGUI,          KC_LALT, XXXXXXX,          KC_SPC,           XXXXXXX,          KC_RALT, FN_FNLK, KC_LEFT, KC_DOWN, KC_RGHT  \
  ),
};
