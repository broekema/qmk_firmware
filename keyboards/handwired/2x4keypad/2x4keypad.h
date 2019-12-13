#pragma once

#include "quantum.h"


#define TOP_LEDS B5
#define BOTTOM_LEDS B4

#define LAYOUT( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }  \
}



void turn_off_leds(void);
void turn_on_led(pin_t pin);
