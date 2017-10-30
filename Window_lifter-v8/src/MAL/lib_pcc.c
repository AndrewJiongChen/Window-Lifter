/*
 * lib_pcc.c
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */

#ifndef MAL_LIB_PCC_C_
#define MAL_LIB_PCC_C_

#include "MAL/lib_pcc.h"

/*void enable_PCC_PORTA(void){
	PCC->PCCn[PCC_PORTA_INDEX]=0x40000000u;
}*/

void enable_PCC_PORTB(void){
	PCC->PCCn[PCC_PORTB_INDEX]=0x40000000u;
}

void enable_PCC_PORTC(void){
	PCC->PCCn[PCC_PORTC_INDEX]=0x40000000u;
}

void enable_PCC_PORTD(void){
	PCC->PCCn[PCC_PORTD_INDEX]=0x40000000u;
}

void enable_PCC_PORTE(void){
	PCC->PCCn[PCC_PORTE_INDEX]=0x40000000u;
}

void enable_PCC_LPIT(void){
	PCC->PCCn[PCC_LPIT_INDEX]=PCC_PCCn_PCS(6);
	PCC->PCCn[PCC_LPIT_INDEX]=0x40000000u;
}

#endif /* MAL_LIB_PCC_C_ */
