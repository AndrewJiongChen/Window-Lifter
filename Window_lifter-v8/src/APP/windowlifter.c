/*
 * windowlifter.c
 *
 *  Created on: 27/10/2017
 *      Author: carlo
 */
#include "APP/windowlifter.h"

void WL_INIT(){
	enable_PORTB();
	enable_PORTC();
	enable_PORTD();
	enable_PORTE();

	set_PORTE_AS(input,UP);
	set_PORTE_AS(input,DOWN);
	set_PORTC_AS(input,AP);

	set_PORTC_AS(output,BAR10);
	set_PORTC_AS(output,BAR9);
	set_PORTE_AS(output,BAR8);
	set_PORTE_AS(output,BAR7);
	set_PORTE_AS(output,BAR6);
	set_PORTE_AS(output,BAR5);
	set_PORTE_AS(output,BAR4);
	set_PORTD_AS(output,BAR3);
	set_PORTD_AS(output,BAR2);
	set_PORTC_AS(output,BAR1);

	set_PORTB_AS(output,LED_BLUE);
	set_PORTB_AS(output,LED_GREEN);
}

void BAR_ON(){
	put_T_PORTC_PIN(BAR10);
	put_T_PORTC_PIN(BAR9);
	put_T_PORTE_PIN(BAR8);
	put_T_PORTE_PIN(BAR7);
	put_T_PORTE_PIN(BAR6);
	put_T_PORTE_PIN(BAR5);
	put_T_PORTE_PIN(BAR4);
	put_T_PORTD_PIN(BAR3);
	put_T_PORTD_PIN(BAR2);
	put_T_PORTC_PIN(BAR1);
}

void BAR_CTRL(T_UBYTE t_uLed){
	if(t_uLed==1){
		put_T_PORTC_PIN(BAR10);
	}
	if(t_uLed==2){
		put_T_PORTC_PIN(BAR9);
	}
	if(t_uLed==3){
		put_T_PORTE_PIN(BAR8);
	}
	if(t_uLed==4){
		put_T_PORTE_PIN(BAR7);
	}
	if(t_uLed==5){
		put_T_PORTE_PIN(BAR6);
	}
	if(t_uLed==6){
		put_T_PORTE_PIN(BAR5);
	}
	if(t_uLed==7){
		put_T_PORTE_PIN(BAR4);
	}
	if(t_uLed==8){
		put_T_PORTD_PIN(BAR3);
	}
	if(t_uLed==9){
		put_T_PORTD_PIN(BAR2);
	}
	if(t_uLed==10){
		put_T_PORTC_PIN(BAR1);
	}
}

void LED_BLUE_ON(){
	put_PORTB_PIN(LED_BLUE,high);
}

void LED_BLUE_OFF(){
	put_PORTB_PIN(LED_BLUE,low);
}

void LED_GREEN_ON(){
	put_PORTB_PIN(LED_GREEN,high);
}

void LED_GREEN_OFF(){
	put_PORTB_PIN(LED_GREEN,low);
}

T_ULONG BTN_UP(){
	return get_PORTE_PIN(UP);
}

T_ULONG BTN_DOWN(){
	return get_PORTE_PIN(DOWN);
}

T_ULONG ANTI_PINCH(){
	return get_PORTC_PIN(AP);
}
