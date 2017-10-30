/*
 * lib_port.c
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */

#include "MAL/lib_port.h"

/*void set_PORTA(T_ULONG PIN,T_ULONG DIR){
	PORTA->PCR[PIN]=DIR;
}*/

void set_PORTB(T_ULONG PIN,T_ULONG DIR){
	PORTB->PCR[PIN]=DIR;
}

void set_PORTC(T_ULONG PIN,T_ULONG DIR){
	PORTC->PCR[PIN]=DIR;
}

void set_PORTD(T_ULONG PIN,T_ULONG DIR){
	PORTD->PCR[PIN]=DIR;
}

void set_PORTE(T_ULONG PIN,T_ULONG DIR){
	PORTE->PCR[PIN]=DIR;
}
