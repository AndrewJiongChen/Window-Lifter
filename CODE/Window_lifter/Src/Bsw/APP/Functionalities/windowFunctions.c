/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.c $
 * $Revision: 3 $
 * $Author: Carlos Martinez $
 * $Date: 03/12/2017 $
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
 * $Log: windowFunctions.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "windowFunctions.h"

/* Constants and types */
/*============================================================================*/
T_UBYTE LEDBarCounter;

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
/*Reset all window lifter functions*/
T_UBYTE reset(){
	turnAllLEDBar();
	return 1u;
}

/*First State of window lifter*/
T_UBYTE initializeWindowLifter(){
	if(!getButtonState(down)){
		return 1u;
	}else{
		return 2u;
	}
}

/*Second State validate downward input signal*/
T_UBYTE validateButtonDown(){
	static T_UBYTE validateButtonCounter=1;
	if(!getButtonState(down)){
		validateButtonCounter=1;
		return 1u;
	}else{
		if(getButtonState(down)&&validateButtonCounter<=9){
			validateButtonCounter++;
			return 2u;
		}else{
			if(getButtonState(down)&&(validateButtonCounter==10)){
				validateButtonCounter=1;
				return 3u;
			}else{}
		}
	}
}

/*Third state, determines if user will choice automatic or manual mode */
T_UBYTE modeFunctionalityValidationDown(){
	static T_ULONG modeFunctionalityCounter=1;
	if(getButtonState(down) && (modeFunctionalityCounter<=500)){
		modeFunctionalityCounter++;
		return 3u;
	}else{
		if(!getButtonState(down) && modeFunctionalityCounter<=500){
			modeFunctionalityCounter=1;
			return 4u;
		}else{
			if(getButtonState(down) && (modeFunctionalityCounter>500)){
				modeFunctionalityCounter=1;
				return 5u;
			}
		}
	}
}

/*Fourth State automatic downward*/
T_UBYTE automaticDownward(){
	static T_ULONG transitionsDelayCounter=1;
	if(LEDBarCounter>0){
		if(transitionsDelayCounter<=400){
			transitionsDelayCounter++;
			return 4u;
		}else{
			turnLEDBar(LEDBarCounter);
			LEDBarCounter--;
			transitionsDelayCounter=1;
			return 4u;
		}
	}else{
		turnLED(green,off);
		return 6u;
	}
}

/*Fifth state manual downward*/
T_UBYTE manualDownward(){
	static T_ULONG transitionsDelayCounter=1;
	if(getButtonState(down)&&(LEDBarCounter>0)){
		if(transitionsDelayCounter<=400){
			transitionsDelayCounter++;
			return 5u;
		}else{
			turnLEDBar(LEDBarCounter);
			LEDBarCounter--;
			transitionsDelayCounter=1;
			return 5u;
		}
	}else{
		if(!getButtonState(down)||LEDBarCounter==0){
			turnLED(green,off);
			return 6u;
		}
	}
}

/*Sixth state is the most important state because it controls both window movements*/
T_UBYTE transitionState(){
	if(!getButtonState(down)&&!getButtonState(up)){
		turnLED(green,off);
		turnLED(blue,off);
		return 6u;
	}else{
		if(getButtonState(down)&&LEDBarCounter==0){
			return 6u;
		}else{
			if(getButtonState(down)&&LEDBarCounter>0){
				return 2u;
			}else{
				if(getButtonState(up)&&LEDBarCounter<=9){
					return 7u;
				}
			}
		}
	}
}

/*Seventh state validation of Upward button signal*/
T_UBYTE validateButtonUp(){
	static T_UBYTE validateButtonCounter=1;
	if(!getButtonState(up)){
		validateButtonCounter=1;
		return 6u;
	}else{
		if(getButtonState(up)&&validateButtonCounter<=9){
			validateButtonCounter++;
			return 7u;
		}else{
			if(getButtonState(up)&&(validateButtonCounter==10)){
				validateButtonCounter=1;
				return 8u;
			}else{}
		}
	}
}

T_UBYTE modeFunctionalityValidationUp(){
	static T_ULONG modeFunctionalityCounter=1;
	if(getButtonState(up) && (modeFunctionalityCounter<=500)){
		modeFunctionalityCounter++;
		return 8u;
	}else{
		if(!getButtonState(up) && modeFunctionalityCounter<=500){
			modeFunctionalityCounter=1;
			return 9u;
		}else{
			if(getButtonState(up) && (modeFunctionalityCounter>500)){
				modeFunctionalityCounter=1;
				return 10u;
			}
		}
	}
}

T_UBYTE automaticUpward(){
	static T_ULONG transitionsDelayCounter=1;
	if(getButtonState(antiPinch)){
		return 12u;
	}else{
		if(LEDBarCounter<=9){
			if(transitionsDelayCounter<=400){
				transitionsDelayCounter++;
				return 9u;
			}else{
				LEDBarCounter++;
				turnLEDBar(LEDBarCounter);
				transitionsDelayCounter=1;
				return 9u;
			}
		}else{
			turnLED(blue,off);
			return 6u;
		}
	}
}

T_UBYTE manualUpward(){
	static T_ULONG transitionsDelayCounter=1;
	if(getButtonState(antiPinch)){
		return 11u;
	}else{
		if(getButtonState(up)&&(LEDBarCounter<=9)){
			if(transitionsDelayCounter<=400){
				transitionsDelayCounter++;
				return 10u;
			}else{
				LEDBarCounter++;
				turnLEDBar(LEDBarCounter);
				transitionsDelayCounter=1;
				return 10u;
			}
		}else{
			if(!getButtonState(up)||(LEDBarCounter==10)){
				turnLED(blue,off);
				return 6u;
			}
		}
	}
}

T_UBYTE validateAntiPinch(){
	static T_UBYTE validateButtonCounter=1;
	if(!getButtonState(antiPinch)){
		validateButtonCounter=1;
		return 6u;
	}else{
		if(getButtonState(up)&&validateButtonCounter<=9){
			validateButtonCounter++;
			return 11u;
		}else{
			if(getButtonState(up)&&(validateButtonCounter==10)){
				validateButtonCounter=1;
				return 12u;
			}else{}
		}
	}
}

T_UBYTE antiPinchRoutine(){
	static T_ULONG transitionsDelayCounter=1;
	if(LEDBarCounter>0){
		if(transitionsDelayCounter<=400){
			transitionsDelayCounter++;
			return 12u;
		}else{
			turnLEDBar(LEDBarCounter);
			LEDBarCounter--;
			transitionsDelayCounter=1;
			return 12u;
		}
	}else{
		turnLED(green,off);
		return 13u;
	}
}

T_UBYTE delay5S(){
	static T_ULONG delayCounter=1;
	if(delayCounter<5000){
		delayCounter++;
		return 13;
	}else{
		delayCounter=1;
		return 6;
	}
}
