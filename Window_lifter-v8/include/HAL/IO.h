/*
 * IO.h
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */

#ifndef HAL_IO_H_
#define HAL_IO_H_

#include "MAL/lib_gpio.h"
#include "MAL/lib_pcc.h"
#include "MAL/lib_port.h"

#define input 0x00000110
#define output 0x00000100

#define high	1
#define low		0

//void enable_PORTA();
void enable_PORTB();
void enable_PORTC();
void enable_PORTD();
void enable_PORTE();

void set_PORTB_AS(T_ULONG LVL,T_ULONG PIN);
void set_PORTC_AS(T_ULONG LVL,T_ULONG PIN);
void set_PORTD_AS(T_ULONG LVL,T_ULONG PIN);
void set_PORTE_AS(T_ULONG LVL,T_ULONG PIN);

//T_UBYTE get_PORTA(T_UBYTE PIN);
T_ULONG get_PORTB_PIN(T_ULONG PIN);
T_ULONG get_PORTC_PIN(T_ULONG PIN);
T_ULONG get_PORTD_PIN(T_ULONG PIN);
T_ULONG get_PORTE_PIN(T_ULONG PIN);

//void put_PORTA();
void put_PORTB_PIN(T_ULONG PIN,T_ULONG LVL);
void put_PORTC_PIN(T_ULONG PIN,T_ULONG LVL);
void put_PORTD_PIN(T_ULONG PIN,T_ULONG LVL);
void put_PORTE_PIN(T_ULONG PIN,T_ULONG LVL);

//void put_T_PORTA();
void put_T_PORTB_PIN(T_ULONG PIN);
void put_T_PORTC_PIN(T_ULONG PIN);
void put_T_PORTD_PIN(T_ULONG PIN);
void put_T_PORTE_PIN(T_ULONG PIN);

#endif /* HAL_IO_H_ */
