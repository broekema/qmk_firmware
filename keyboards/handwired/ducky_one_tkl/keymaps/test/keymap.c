#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { \
     LAYOUT(						    
 	   KC_QUOT, KC_UP, KC_SPC, KC_G, 
 	   KC_SCLN, MO(1), KC_LALT, KC_F, 
 	   KC_P, KC_DEL, KC_LGUI, KC_R, 
 	   KC_LBRC, KC_END, KC_LCTL, KC_T 
     )							       
 };

 bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
