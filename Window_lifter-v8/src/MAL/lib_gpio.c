/*
 * lib_gpio.c
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */
#include "MAL/lib_gpio.h"

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
