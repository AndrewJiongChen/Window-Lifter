/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.c $
 * $Revision: 3 $
 * $Author: Georgina Salazar $
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
#include "LEDBar.h"

/* Constants and types */
/*============================================================================*/

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void turnLEDBar(T_ULONG ledBarIndex){
	switch (ledBarIndex){
	case 10:
		Dio_PortTooglePin(PORTCH_D,LB10);
		break;
	case 9:
		Dio_PortTooglePin(PORTCH_D,LB9);
		break;
	case 8:
		Dio_PortTooglePin(PORTCH_D,LB8);
		break;
	case 7:
		Dio_PortTooglePin(PORTCH_D,LB7);
		break;
	case 6:
		Dio_PortTooglePin(PORTCH_D,LB6);
		break;
	case 5:
		Dio_PortTooglePin(PORTCH_D,LB5);
		break;
	case 4:
		Dio_PortTooglePin(PORTCH_D,LB4);
		break;
	case 3:
		Dio_PortTooglePin(PORTCH_D,LB3);
		break;
	case 2:
		Dio_PortTooglePin(PORTCH_D,LB2);
		break;
	case 1:
		Dio_PortTooglePin(PORTCH_D,LB1);
		break;
	default:
		break;
	}
}
