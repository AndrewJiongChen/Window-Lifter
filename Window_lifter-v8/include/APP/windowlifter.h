/*
 * windowlifter.h
 *
 *  Created on: 27/10/2017
 *      Author: carlo
 */

#ifndef APP_WINDOWLIFTER_H_
#define APP_WINDOWLIFTER_H_

#include "HAL/clock.h"
#include "HAL/delay.h"
#include "HAL/IO.h"
#include "HAL/wdog.h"

#define BAR10	14
#define BAR9	3
#define BAR8	16
#define BAR7	15
#define BAR6	14
#define BAR5	13
#define BAR4	1
#define BAR3	7
#define BAR2	6
#define BAR1	15

#define LED_BLUE	16
#define LED_GREEN	15

#define UP	0
#define DOWN	9
#define AP	5

void WL_INIT();
void BAR_ON();
void BAR_CTRL(T_UBYTE t_uLed );
void LED_BLUE_ON();
void LED_BLUE_OFF();
void LED_GREEN_ON();
void LED_GREEN_OFF();

T_ULONG BTN_UP();
T_ULONG BTN_DOWN();
T_ULONG ANTI_PINCH();

#endif /* APP_WINDOWLIFTER_H_ */
