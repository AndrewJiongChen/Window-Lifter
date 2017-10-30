/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_pcc.c $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 29/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Setting registers of PCC
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
/*        Carlos       |       Version 1    |   Library of PCC registers      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "MAL/lib_pcc.h"


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


/* Exported functions */

/*void enable_PCC_PORTA(void){
	PCC->PCCn[PCC_PORTA_INDEX]=0x40000000u;
}*/

void enable_PCC_PORTB(void){
	PCC->PCCn[PCC_PORTB_INDEX]=0x40000000u;
}

void enable_PCC_PORTC(void){
	PCC->PCCn[PCC_PORTC_INDEX]=0x40000000u;
}

void enable_PCC_PORTD(void){
	PCC->PCCn[PCC_PORTD_INDEX]=0x40000000u;
}

void enable_PCC_PORTE(void){
	PCC->PCCn[PCC_PORTE_INDEX]=0x40000000u;
}

void enable_PCC_LPIT(void){
	PCC->PCCn[PCC_LPIT_INDEX]=PCC_PCCn_PCS(6);
	PCC->PCCn[PCC_LPIT_INDEX]=0x40000000u;
}

/*============================================================================*/
