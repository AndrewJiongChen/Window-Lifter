/*
 * delay.c
 *
 *  Created on: 27/10/2017
 *      Author: carlo
 */
#include "HAL/delay.h"

void set_delay_us(T_ULONG t_uTime){
	PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(6);
	PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK;
	LPIT0->MCR = 0x00000001;
	LPIT0->TMR[0].TVAL = 40*t_uTime;
	LPIT0->TMR[0].TCTRL = 0x00000001;
}

void set_delay_ms(T_ULONG t_uTime){
	PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(6);
	PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK;
	LPIT0->MCR = 0x00000001;
	LPIT0->TMR[0].TVAL = 40000*t_uTime;
	LPIT0->TMR[0].TCTRL = 0x00000001;
}

void set_delay_s(T_ULONG t_uTime){
	PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(6);
	PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK;
	LPIT0->MCR = 0x00000001;
	LPIT0->TMR[0].TVAL = 40000000*t_uTime;
	LPIT0->TMR[0].TCTRL = 0x00000001;
}

void delay_start(void){
	while(0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)){}
	LPIT0->MSR |= LPIT_MSR_TIF0_MASK;
}
