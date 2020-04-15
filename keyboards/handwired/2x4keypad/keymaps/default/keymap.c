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

    [NORMAL_LAYER] = LAYOUT(TO(1),     KC_KP_EQUAL , KC_MEDIA_PREV_TRACK, KC__VOLUP, 
			    WIN_LOCK, KC_AUDIO_MUTE,       KC_MEDIA_NEXT_TRACK, KC__VOLDOWN),

    [MEDIA_LAYER]  = LAYOUT(TO(0),    KC_CALC, KC_MY_COMPUTER, KC_WWW_SEARCH, 
			    RESET,    KC_MAIL, KC_WWW_HOME,    KC_WWW_BACK),
};



void matrix_init_user(void)
{
    set_unicode_input_mode(UC_WINC);  /* See https://jayliu50.github.io/qmk-cheatsheet/ */

    set_layer_0_led();
}


layer_state_t layer_state_set_user(layer_state_t state)
{
 switch (biton32(state))
   {
   case NORMAL_LAYER:
     set_layer_0_led();
     break;

   case MEDIA_LAYER:
     set_layer_1_led();
     break;
   }

 return state;     
}
