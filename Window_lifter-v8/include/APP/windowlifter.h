/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_wdog.h $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 28/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file

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
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef APP_WINDOWLIFTER_H_
#define APP_WINDOWLIFTER_H_

/* Includes */
/*============================================================================*/

#include "HAL/clock.h"
#include "HAL/delay.h"
#include "HAL/IO.h"
#include "HAL/wdog.h"

/* Constants and types */

#define BAR10	14
#define BAR9	3
#define BAR8	16
#define BAR7	15
#define BAR6	14
#define BAR5	13
#define BAR4	1
#define BAR3	7
#define BAR2	6
#define BAR1	15

#define LED_BLUE	16
#define LED_GREEN	15

#define UP	0
#define DOWN	9
#define AP	5


/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */

void WL_INIT();
void BAR_ON();
void BAR_CTRL(T_UBYTE t_uLed );
void LED_BLUE_ON();
void LED_BLUE_OFF();
void LED_GREEN_ON();
void LED_GREEN_OFF();

T_ULONG BTN_UP();
T_ULONG BTN_DOWN();
T_ULONG ANTI_PINCH();

/*============================================================================*/

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
