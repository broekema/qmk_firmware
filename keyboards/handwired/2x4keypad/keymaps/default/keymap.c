#include QMK_KEYBOARD_H

#define WIN_TAB LGUI(KC_TAB)
#define WIN_LOCK LGUI(KC_L)

enum layers {
  NORMAL_LAYER = 0,
  MEDIA_LAYER,
  TBD_LAYER2,
};


/* /\* Enum for the tap dancing keys *\/ */
/* enum tap_codes { */
/*     A_Q, E_Q, E_U, E_E, */
/*     A_Y, I_I, O_C, U_U */
/* }; */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [NORMAL_LAYER] = LAYOUT(TO(1),    KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC__VOLUP, 
			    WIN_LOCK, KC_AUDIO_MUTE,       KC_MEDIA_NEXT_TRACK, KC__VOLDOWN),

    [MEDIA_LAYER]  = LAYOUT(TO(2),    KC_CALC, KC_MY_COMPUTER, KC_WWW_SEARCH, 
			    KC_TRNS,  KC_MAIL, KC_WWW_HOME,    KC_WWW_BACK),

    [TBD_LAYER2]   = LAYOUT(TO(0),    KC_F13, KC_F14, KC_F15, 
			    KC_TRNS,  KC_F16, KC_F17, KC_F18),

};


/* DISABLED
void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
*/


void matrix_init_user(void)
{
    set_unicode_input_mode(UC_WINC);  /* See https://jayliu50.github.io/qmk-cheatsheet/ */

    turn_on_led(TOP_LEDS);
    turn_on_led(BOTTOM_LEDS);
}


layer_state_t layer_state_set_user(layer_state_t state)
{
    turn_off_leds();

    switch (biton32(state))
    {
    case NORMAL_LAYER:
      turn_on_led(TOP_LEDS);
      turn_on_led(BOTTOM_LEDS);
      break;

    case MEDIA_LAYER:
      turn_on_led(TOP_LEDS);
      break;

    case TBD_LAYER2:
	turn_on_led(BOTTOM_LEDS);
	break;
    }
    return state;
}
