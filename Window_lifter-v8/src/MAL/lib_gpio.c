/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_gpio.c.c $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 29/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Setting parameters of GPIO registers
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
/*        Carlos       |       Version 1    |        Set registers of GPIO    */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: lib_gpio.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "MAL/lib_gpio.h"

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
/*============================================================================*/

//Data direction as input
/*void PORTA_SET_INPUT(T_ULONG PIN){
	PTA->PDDR &= ~(1<<PIN);
}/*/

void PORTB_SET_INPUT(T_ULONG PIN){
	PTB->PDDR &= ~(1<<PIN);
}

void PORTC_SET_INPUT(T_ULONG PIN){
	PTC->PDDR &= ~(1<<PIN);
}

void PORTD_SET_INPUT(T_ULONG PIN){
	PTD->PDDR &= ~(1<<PIN);
}

void PORTE_SET_INPUT(T_ULONG PIN){
	PTE->PDDR &= ~(1<<PIN);
}

//Data direction as output
/*void PORTA_SET_OUTPUT(T_ULONG PIN){
	PTA->PDDR |= (1<<PIN);
}*/

void PORTB_SET_OUTPUT(T_ULONG PIN){
	PTB->PDDR |= (1<<PIN);
}

void PORTC_SET_OUTPUT(T_ULONG PIN){
	PTC->PDDR |= (1<<PIN);
}

void PORTD_SET_OUTPUT(T_ULONG PIN){
	PTD->PDDR |= (1<<PIN);
}

void PORTE_SET_OUTPUT(T_ULONG PIN){
	PTE->PDDR |= (1<<PIN);
}

//output high
/*void PORTA_OUTPUT_HIGH(T_ULONG PIN){
	PTA->PSOR |= 1<<PIN;
}*/

void PORTB_OUTPUT_HIGH(T_ULONG PIN){
	PTB->PSOR |= 1<<PIN;
}

void PORTC_OUTPUT_HIGH(T_ULONG PIN){
	PTC->PSOR |= 1<<PIN;
}

void PORTD_OUTPUT_HIGH(T_ULONG PIN){
	PTD->PSOR |= 1<<PIN;
}

void PORTE_OUTPUT_HIGH(T_ULONG PIN){
	PTE->PSOR |= 1<<PIN;
}

//OUTPUT LOW
/*void PORTA_OUTPUT_LOW(T_ULONG PIN){
	PTA->PCOR |= 1<<PIN;
}*/

void PORTB_OUTPUT_LOW(T_ULONG PIN){
	PTB->PCOR |= 1<<PIN;
}

void PORTC_OUTPUT_LOW(T_ULONG PIN){
	PTC->PCOR |= 1<<PIN;
}

void PORTD_OUTPUT_LOW(T_ULONG PIN){
	PTD->PCOR |= 1<<PIN;
}

void PORTE_OUTPUT_LOW(T_ULONG PIN){
	PTE->PCOR |= 1<<PIN;
}

//OUT PUT TOGGLE
/*void PORTA_OUTPUT_TOGGLE(T_ULONG PIN){
	PTA->PTOR |= 1<<PIN;
}*/

void PORTB_OUTPUT_TOGGLE(T_ULONG PIN){
	PTB->PTOR |= 1<<PIN;
}

void PORTC_OUTPUT_TOGGLE(T_ULONG PIN){
	PTC->PTOR |= 1<<PIN;
}

void PORTD_OUTPUT_TOGGLE(T_ULONG PIN){
	PTD->PTOR |= 1<<PIN;
}

void PORTE_OUTPUT_TOGGLE(T_ULONG PIN){
	PTE->PTOR |= 1<<PIN;
}

//INPUT
/*T_ULONG PORTA_INPUT(T_ULONG PIN){
	if(PTA->PDIR & (1<<PIN)){
		return 0x1u;
	}else{
		return 0x0u;
	}
}*/

T_ULONG PORTB_INPUT(T_ULONG PIN){
	if(PTB->PDIR & (1<<PIN)){
		return 0x1u;
	}else{
		return 0x0u;
	}
}

T_ULONG PORTC_INPUT(T_ULONG PIN){
	if(PTC->PDIR & (1<<PIN)){
		return 0x1u;
	}else{
		return 0x0u;
	}
}

T_ULONG PORTD_INPUT(T_ULONG PIN){
	if(PTD->PDIR & (1<<PIN)){
		return 0x1u;
	}else{
		return 0x0u;
	}
}

T_ULONG PORTE_INPUT(T_ULONG PIN){
	if(PTE->PDIR & (1<<PIN)){
		return 0x1u;
	}else{
		return 0x0u;
	}
}

