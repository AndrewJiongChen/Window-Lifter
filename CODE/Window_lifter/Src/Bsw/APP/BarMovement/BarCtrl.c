/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.c $
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
/*   Carlos Martinez   |         2.1        | New functions added             */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "BarCtrl.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/
T_UBYTE State;
T_UBYTE counterLED,tickValidateButton;
T_UBYTE tickLEDBarTransitions,LEDBarTransitions,tickAutomaticMode;
T_UBYTE automaticMovementFlag;
T_ULONG waitSecondsVariable;

/* Exported functions prototypes */
/*============================================================================*/
void downwardMovement(){
	if(tickAutomaticMode<250){
		tickAutomaticMode++;
		downwardTransitions();
		automaticMovementFlag=1;
	}else{
		automaticMovementFlag=0;
		downwardTransitions();
	}
}

void upwardMovement(){
	if(tickAutomaticMode<250){
		tickAutomaticMode++;
		upwardTransitions();
		automaticMovementFlag=2;
	}else{
		automaticMovementFlag=0;
		upwardTransitions();
	}
}

void downwardTransitions(){
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

void upwardTransitions(){
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

void automaticDownwardTransitions(){
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
			automaticMovementFlag=0;
		}
	}
}

void automaticUpwardTransitions(){
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
			automaticMovementFlag=0;
		}
	}
}

void antipinchDownwardTransitions(){
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
			automaticMovementFlag=0;
		}
	}
}
