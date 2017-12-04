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
#include "LEDBarDriver.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void turnAllLEDBar(){
	T_UBYTE NumberOfLEDBar;
	for(NumberOfLEDBar=1;NumberOfLEDBar<=10;NumberOfLEDBar++){
		turnLEDBar(NumberOfLEDBar);
	}
}

