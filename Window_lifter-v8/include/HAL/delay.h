/*
 * delay.h
 *
 *  Created on: 27/10/2017
 *      Author: carlo
 */

#ifndef HAL_DELAY_H_
#define HAL_DELAY_H_

#include "MAL/lib_pcc.h"

void set_delay_us(T_ULONG t_uTime);
void set_delay_ms(T_ULONG t_uTime);
void set_delay_s(T_ULONG t_uTime);
void delay_start(void);

#endif /* HAL_DELAY_H_ */
