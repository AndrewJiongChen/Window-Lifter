/*
 * IO.c
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */

#include "HAL/IO.h"

//Set PCC

void enable_PORTB(){
	enable_PCC_PORTB();
}

void enable_PORTC(){
	enable_PCC_PORTC();
}

void enable_PORTD(){
	enable_PCC_PORTD();
}

void enable_PORTE(){
	enable_PCC_PORTE();
}

//Set as input
void set_PORTB_AS(T_ULONG LVL,T_ULONG PIN){
	if(LVL == 0x00000110){
		PORTB_SET_INPUT(PIN);
		set_PORTB(PIN,LVL);
	}else{
		if(LVL == 0x00000100){
			PORTB_SET_OUTPUT(PIN);
			set_PORTB(PIN,LVL);
		}
	}
}
void set_PORTC_AS(T_ULONG LVL,T_ULONG PIN){
	if(LVL == 0x00000110){
		PORTC_SET_INPUT(PIN);
		set_PORTC(PIN,LVL);
	}else{
		if(LVL == 0x00000100){
			PORTC_SET_OUTPUT(PIN);
			set_PORTC(PIN,LVL);
		}
	}
}
void set_PORTD_AS(T_ULONG LVL,T_ULONG PIN){
	if(LVL == 0x00000110){
		PORTD_SET_INPUT(PIN);
		set_PORTD(PIN,LVL);
	}else{
		if(LVL == 0x00000100){
			PORTD_SET_OUTPUT(PIN);
			set_PORTD(PIN,LVL);
		}
	}
}
void set_PORTE_AS(T_ULONG LVL,T_ULONG PIN){
	if(LVL == 0x00000110){
		PORTE_SET_INPUT(PIN);
		set_PORTE(PIN,LVL);
	}else{
		if(LVL == 0x00000100){
			PORTE_SET_OUTPUT(PIN);
			set_PORTE(PIN,LVL);
		}
	}
}

/*T_UBYTE get_PORTA_PIN(T_UBYTE PIN){

}*/

T_ULONG get_PORTB_PIN(T_ULONG PIN){
	return PORTB_INPUT(PIN);
}

T_ULONG get_PORTC_PIN(T_ULONG PIN){
	return PORTC_INPUT(PIN);
}

T_ULONG get_PORTD_PIN(T_ULONG PIN){
	return PORTD_INPUT(PIN);
}

T_ULONG get_PORTE_PIN(T_ULONG PIN){
	return PORTE_INPUT(PIN);
}


void put_PORTB_PIN(T_ULONG PIN,T_ULONG LVL){
	if(LVL){
		PORTB_OUTPUT_HIGH(PIN);
	}else{
		PORTB_OUTPUT_LOW(PIN);
	}
}

void put_PORTC_PIN(T_ULONG PIN,T_ULONG LVL){
	if(LVL){
		PORTC_OUTPUT_HIGH(PIN);
	}else{
		PORTC_OUTPUT_LOW(PIN);
	}
}

void put_PORTD_PIN(T_ULONG PIN,T_ULONG LVL){
	if(LVL){
		PORTD_OUTPUT_HIGH(PIN);
	}else{
		PORTD_OUTPUT_LOW(PIN);
	}
}

void put_PORTE_PIN(T_ULONG PIN,T_ULONG LVL){
	if(LVL){
		PORTE_OUTPUT_HIGH(PIN);
	}else{
		PORTE_OUTPUT_LOW(PIN);
	}
}


void put_T_PORTB_PIN(T_ULONG PIN){
	PORTB_OUTPUT_TOGGLE(PIN);
}

void put_T_PORTC_PIN(T_ULONG PIN){
	PORTC_OUTPUT_TOGGLE(PIN);
}

void put_T_PORTD_PIN(T_ULONG PIN){
	PORTD_OUTPUT_TOGGLE(PIN);
}

void put_T_PORTE_PIN(T_ULONG PIN){
	PORTE_OUTPUT_TOGGLE(PIN);
}
