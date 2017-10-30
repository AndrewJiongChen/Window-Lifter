/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_port.c $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 29/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Setting parameters of PORT registers
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
/*        Carlos       |       Version 1    | Setting parameters of PORT      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: lib_port.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "MAL/lib_port.h"

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
/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
/* Exported functions */

/*void set_PORTA(T_ULONG PIN,T_ULONG DIR){
	PORTA->PCR[PIN]=DIR;
}*/

void set_PORTB(T_ULONG PIN,T_ULONG DIR){
	PORTB->PCR[PIN]=DIR;
}

void set_PORTC(T_ULONG PIN,T_ULONG DIR){
	PORTC->PCR[PIN]=DIR;
}

void set_PORTD(T_ULONG PIN,T_ULONG DIR){
	PORTD->PCR[PIN]=DIR;
}

void set_PORTE(T_ULONG PIN,T_ULONG DIR){
	PORTE->PCR[PIN]=DIR;
}

/*============================================================================*/
