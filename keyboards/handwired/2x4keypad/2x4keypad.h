#pragma once

#include "quantum.h"


#define LAYOUT( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }  \
}


void set_layer_0_led(void);
void set_layer_1_led(void);
