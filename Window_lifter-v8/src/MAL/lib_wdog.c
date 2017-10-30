/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_wdog.c $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 28/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Setting parameters of WATCHDOG
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
/*        Carlos       |       Version 1    | Setting parameters of WDOG      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: lib_wdog.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "MAL/lib_wdog.h"

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

void DISABLE_WDOG(){
	WDOG->CNT=0xD928C520; /*Unlock watchdog*/
	WDOG->TOVAL=0x0000FFFF; /*Maximum timeout value*/
	WDOG->CS = 0x00002100;
}
/*============================================================================*/
