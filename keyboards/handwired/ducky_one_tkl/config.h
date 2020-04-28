/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define VENDOR_ID    0xB33F
#define PRODUCT_ID   0x0667
#define DEVICE_VER   0x0001
#define MANUFACTURER Broekema
#define PRODUCT      DuckyOneTKL
#define DESCRIPTION  DuckyOneTKL

/* #define MATRIX_ROWS 8 */
/* #define MATRIX_COLS 13 */

/* #define DIODE_DIRECTION ROW2COL */

/* #define MATRIX_COL_PINS { B11, B10, B1, B0, B12, B13, B14, B15, A8, A15, B3, B4, B5 } */
/* #define MATRIX_ROW_PINS { A7, A6, B8, B9, C13, A0, B7, B6 } */
/* #define UNUSED_PINS */

#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B10, B11, B12, B13, B14, B15, A8 }
#define MATRIX_ROW_PINS { B7, B6, B5, B4, B3, A15 }

#define DEBOUNCE 5


/* #define BACKLIGHT_PIN           B8  */
/* #define BACKLIGHT_PWM_DRIVER    PWMD2 */
/* #define BACKLIGHT_PWM_CHANNEL   1 */

/* #define RGB_DI_PIN B9 */
