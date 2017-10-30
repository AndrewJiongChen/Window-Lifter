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
    short description in one sentence end with dot.
    detailed
    multiline
    description of the file
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
#ifndef HAL_IO_H_
#define HAL_IO_H_

/* Includes */
/*============================================================================*/

#include "MAL/lib_gpio.h"
#include "MAL/lib_pcc.h"
#include "MAL/lib_port.h"

/* Constants and types */

#define input 0x00000110
#define output 0x00000100

#define high	1
#define low		0

/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */

//void enable_PORTA();
void enable_PORTB();
void enable_PORTC();
void enable_PORTD();
void enable_PORTE();

void set_PORTB_AS(T_ULONG LVL,T_ULONG PIN);
void set_PORTC_AS(T_ULONG LVL,T_ULONG PIN);
void set_PORTD_AS(T_ULONG LVL,T_ULONG PIN);
void set_PORTE_AS(T_ULONG LVL,T_ULONG PIN);

//T_UBYTE get_PORTA(T_UBYTE PIN);
T_ULONG get_PORTB_PIN(T_ULONG PIN);
T_ULONG get_PORTC_PIN(T_ULONG PIN);
T_ULONG get_PORTD_PIN(T_ULONG PIN);
T_ULONG get_PORTE_PIN(T_ULONG PIN);

//void put_PORTA();
void put_PORTB_PIN(T_ULONG PIN,T_ULONG LVL);
void put_PORTC_PIN(T_ULONG PIN,T_ULONG LVL);
void put_PORTD_PIN(T_ULONG PIN,T_ULONG LVL);
void put_PORTE_PIN(T_ULONG PIN,T_ULONG LVL);

//void put_T_PORTA();
void put_T_PORTB_PIN(T_ULONG PIN);
void put_T_PORTC_PIN(T_ULONG PIN);
void put_T_PORTD_PIN(T_ULONG PIN);
void put_T_PORTE_PIN(T_ULONG PIN);


/*============================================================================*/

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
