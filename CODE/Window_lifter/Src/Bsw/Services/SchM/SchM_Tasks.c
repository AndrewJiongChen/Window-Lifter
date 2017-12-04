/*
 *SchM_Tasks.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

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
/*  Francisco Martinez |         1.1        | Creation of the code            */
/*  Rafael Cabrera     |         2.1        | Fixes and updates               */
/*  Georgina Salazar   |         3.1        | Adaptation for the practice     */
/*  Carlos Martinez    |         4.1        | Scheduler Window Lifter         */
/*  Carlos Martinez    |         5.1        | Window lifter states revision   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "SchM_Tasks.h"
#include "windowFunctions.h"
/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/
T_ULONG LEDTransitions=0;

T_UBYTE State=0;
extern T_UBYTE LEDBarCounter=10;

/* Exported functions prototypes */
/*============================================================================*/
extern void SchM_2ms_Task(void){
	switch(State){
	case 1:
		State=initializeWindowLifter();
		break;
	case 2:
		State=validateButtonDown();
		break;
	case 3:
		State=modeFunctionalityValidationDown();
		break;
	case 4:
		turnLED(green,on);
		State=automaticDownward();
		break;
	case 5:
		turnLED(green,on);
		State=manualDownward();
		break;
	case 6:
		State=transitionState();
		break;
	case 7:
		State=validateButtonUp();
		break;
	case 8:
		State=modeFunctionalityValidationUp();
		break;
	case 9:
		turnLED(blue,on);
		State=automaticUpward();
		break;
	case 10:
		turnLED(blue,on);
		State=manualUpward();
		break;
	case 11:
		State=validateAntiPinch();
		break;
	case 12:
		turnLED(green,on);
		turnLED(blue,off);
		State=antiPinchRoutine();
		break;
	case 13:
		State=delay5S();
		break;
	default:
		State=reset();
		break;
	}
}


extern void SchM_4ms_Task(void){
	if(LEDTransitions<250){
		LEDTransitions++;
	}else{
		testLED();
		LEDTransitions=0;
	}
}

extern void SchM_8ms_Task(void){

}

extern void SchM_16ms_Task(void){

}

extern void SchM_32ms_Task(void){

}

extern void SchM_64ms_Task(void){

}

