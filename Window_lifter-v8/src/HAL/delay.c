/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: delay.c $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 28/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
   Set LPIT registers
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*        AUTHOR       |       VERSION      |           DESCRIPTION           */
/*----------------------------------------------------------------------------*/
/*        Carlos       |       Version 1    |  Set lpit registers             */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: delay.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "HAL/delay.h"

/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/


/* Exported functions */

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


/*============================================================================*/

