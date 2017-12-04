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

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/
T_ULONG ledTransitions=0;

extern T_UBYTE State=0;
extern T_UBYTE tickValidateButton=0;
extern T_UBYTE tickLEDBarTransitions=0;
extern T_UBYTE tickAutomaticMode=0;
extern T_UBYTE LEDBarTransitions=10;
extern T_UBYTE automaticMovementFlag=0;
extern T_UBYTE antiPinchCounter=0;
extern T_ULONG waitSecondsVariable;
/* Exported functions prototypes */
/*============================================================================*/
extern void SchM_2ms_Task(void){
	switch (State){
	case 1:
		initalState();
		break;
	case 2:
		downwardTransitionState();
		break;
	case 3:
		windowDown();
		break;
	case 4:
		upwardTransitionState();
		break;
	case 5:
		windowUp();
		break;
	case 6:
		automaticWindowDown();
		break;
	case 7:
		automaticWindowUp();
		break;
	case 8:
		antiPinchRoutine();
		break;
	case 9:
		delay_s(5);
		break;
	default:
		resetSystem();
		break;
	}
}


extern void SchM_4ms_Task(void){
	if(ledTransitions<125){
		ledTransitions++;
	}else{
		testLED();
		ledTransitions=0;
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

