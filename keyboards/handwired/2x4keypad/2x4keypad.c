#include "2x4keypad.h"


void matrix_init_kb(void)
{
    matrix_init_user();

    setPinOutput(TOP_LEDS);
    setPinOutput(BOTTOM_LEDS);
}



void turn_off_leds(void)
{
  writePinLow(TOP_LEDS);
  writePinLow(BOTTOM_LEDS);
}

void turn_on_led(pin_t pin)
{
    writePinHigh(pin);
}
