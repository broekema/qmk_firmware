#include "2x4keypad.h"


void matrix_init_kb(void)
{
    matrix_init_user();

    set_layer_0_led();
}


void set_layer_0_led(void) {
  writePinHigh(LED_PIN_0);
  writePinLow(LED_PIN_1);
}

void set_layer_1_led(void) {
  writePinLow(LED_PIN_0);
  writePinHigh(LED_PIN_1);
  
}
