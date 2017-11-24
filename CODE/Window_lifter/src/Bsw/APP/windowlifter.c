/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.c $
 * $Revision: 3 $
 * $Author: Carlos Martinez $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
 *
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
/*   Carlos Martinez   |         1.1        | Creation of the code            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "windowlifter.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/
T_UBYTE State;
T_UBYTE counterLED,tickValidateButton;
T_UBYTE tickLEDBarTransitions,LEDBarTransitions,tickAutomaticMode;
T_UBYTE antiPinchFlag;
T_ULONG waitSecondsVariable;
/* Exported functions prototypes */
/*============================================================================*/
void resetSystem(){
	for(counterLED=1;counterLED<=10;counterLED++){
		turnLEDBar(counterLED);
	}
	tickValidateButton=0;
	tickLEDBarTransitions=0;
	tickAutomaticMode=0;
	LEDBarTransitions=10;
	antiPinchFlag=0;
	waitSecondsVariable;
	State=1;
}

T_UBYTE validateButton(T_UBYTE button){
	if(getButtonState(button) && tickValidateButton<5){
		tickValidateButton++;
		return 0u;
	}else{
		tickValidateButton=0;
		return 1u;
	}
}

void stateOne(){
	if(getButtonState(down)){
		if(validateButton(down)){
			State=2;
		}else{
			State=1;
		}
	}else{
		if(antiPinchFlag==1){
			State=6;
		}else{}
		if(antiPinchFlag==2){
			State=7;
		}
	}
	if(LEDBarTransitions>=0 && LEDBarTransitions<10){
		if(getButtonState(up)){
			if(validateButton(up)){
				State=4;
			}else{
				State=1;
			}
		}
	}else{}
}

void stateTwo(){
	if(getButtonState(down)){
		State=3;
	}else{
		turnLED(green,off);
		State=1;
	}
}

void stateFour(){
	if(getButtonState(up)){
		State=5;
	}else{
		turnLED(blue,off);
		State=1;
	}
}

void windowDown(){
	turnLED(green,on);
	if(getButtonState(down)){
		if(tickAutomaticMode<250){
			tickAutomaticMode++;
			if(LEDBarTransitions>0&&tickLEDBarTransitions<200){
				tickLEDBarTransitions++;
			}else{
				if(LEDBarTransitions>0){
					turnLEDBar(LEDBarTransitions);
					tickLEDBarTransitions=0;
					LEDBarTransitions--;
				}else{
					turnLED(green,off);
					State=1;
					tickAutomaticMode=0;
					tickLEDBarTransitions=0;
				}
			}
			antiPinchFlag=1;
		}else{
			antiPinchFlag=0;
			if(LEDBarTransitions>0&&tickLEDBarTransitions<200){
				tickLEDBarTransitions++;
			}else{
				if(LEDBarTransitions>0){
					turnLEDBar(LEDBarTransitions);
					tickLEDBarTransitions=0;
					LEDBarTransitions--;
				}else{
					turnLED(green,off);
					State=1;
					tickAutomaticMode=0;
					tickLEDBarTransitions=0;
				}
			}
		}
	}else{
		turnLED(green,off);
		State=1;
		tickAutomaticMode=0;
		tickLEDBarTransitions=0;
	}
}

void automaticWindowDown(){
	turnLED(green,on);
	if(LEDBarTransitions>0&&tickLEDBarTransitions<200){
		tickLEDBarTransitions++;
	}else{
		if(LEDBarTransitions>0){
			turnLEDBar(LEDBarTransitions);
			tickLEDBarTransitions=0;
			LEDBarTransitions--;
		}else{
			turnLED(green,off);
			State=1;
			tickAutomaticMode=0;
			tickLEDBarTransitions=0;
			antiPinchFlag=0;
		}
	}
}

void windowUp(){
	antiPinchFunction();
	turnLED(blue,on);
	if(getButtonState(up)){
		if(tickAutomaticMode<250){
			tickAutomaticMode++;
			if(LEDBarTransitions<=9&&tickLEDBarTransitions<200){
				tickLEDBarTransitions++;
			}else{
				if(LEDBarTransitions<=9){
					LEDBarTransitions++;
					turnLEDBar(LEDBarTransitions);
					tickLEDBarTransitions=0;
				}else{
					turnLED(blue,off);
					State=1;
					tickAutomaticMode=0;
					tickLEDBarTransitions=0;
				}
			}
			antiPinchFlag=2;
		}else{
			antiPinchFlag=0;
			if(LEDBarTransitions<=9&&tickLEDBarTransitions<200){
				tickLEDBarTransitions++;
			}else{
				if(LEDBarTransitions<=9){
					LEDBarTransitions++;
					turnLEDBar(LEDBarTransitions);
					tickLEDBarTransitions=0;
				}else{
					turnLED(blue,off);
					State=1;
					tickAutomaticMode=0;
					tickLEDBarTransitions=0;
				}
			}
		}
	}else{
		turnLED(blue,off);
		State=1;
		tickAutomaticMode=0;
		tickLEDBarTransitions=0;
	}
}

void automaticWindowUp(){
	antiPinchFunction();
	turnLED(blue,on);
	if(LEDBarTransitions<=9 && tickLEDBarTransitions<200){
		tickLEDBarTransitions++;
	}else{
		if(LEDBarTransitions<=9){
			LEDBarTransitions++;
			turnLEDBar(LEDBarTransitions);
			tickLEDBarTransitions=0;
		}else{
			turnLED(blue,off);
			State=1;
			tickAutomaticMode=0;
			tickLEDBarTransitions=0;
			antiPinchFlag=0;
		}
	}
}

void antiPinchFunction(){
	if(getButtonState(antiPinch)){
		if(validateButton(antiPinch)){
			State=8;
		}else{}
	}
}

void antiPinchRoutine(){
	turnLED(blue,off);
	turnLED(green,on);
	if(LEDBarTransitions>0&&tickLEDBarTransitions<200){
		tickLEDBarTransitions++;
	}else{
		if(LEDBarTransitions>0){
			turnLEDBar(LEDBarTransitions);
			tickLEDBarTransitions=0;
			LEDBarTransitions--;
		}else{
			turnLED(green,off);
			State=9;
			tickAutomaticMode=0;
			tickLEDBarTransitions=0;
			antiPinchFlag=0;
		}
	}
}

void delay_s(T_UBYTE seconds){
	if(waitSecondsVariable<500*seconds){
		waitSecondsVariable++;
	}else{
		waitSecondsVariable=0;
		State=1;
	}
}
