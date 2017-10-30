/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_gpio.h $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 28/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Describe gpio function to configures gpio registers
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
/*        Carlos       |       Version 1    | Describes lib_gpio.c            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: lib_gpio.h  $
  ============================================================================*/
#ifndef MAL_LIB_GPIO_H_
#define MAL_LIB_GPIO_H_

/* Includes */
/*============================================================================*/

#include "S32K144.h"
#include "MAL/def_lib.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */

//void PORTA_SET_INPUT(T_ULONG PIN);
void PORTB_SET_INPUT(T_ULONG PIN);
void PORTC_SET_INPUT(T_ULONG PIN);
void PORTD_SET_INPUT(T_ULONG PIN);
void PORTE_SET_INPUT(T_ULONG PIN);

//void PORTA_SET_OUTPUT(T_ULONG PIN);
void PORTB_SET_OUTPUT(T_ULONG PIN);
void PORTC_SET_OUTPUT(T_ULONG PIN);
void PORTD_SET_OUTPUT(T_ULONG PIN);
void PORTE_SET_OUTPUT(T_ULONG PIN);

//void PORTA_OUTPUT_HIGH(T_ULONG PIN);
void PORTB_OUTPUT_HIGH(T_ULONG PIN);
void PORTC_OUTPUT_HIGH(T_ULONG PIN);
void PORTD_OUTPUT_HIGH(T_ULONG PIN);
void PORTE_OUTPUT_HIGH(T_ULONG PIN);

//void PORTA_OUTPUT_LOW(T_ULONG PIN);
void PORTB_OUTPUT_LOW(T_ULONG PIN);
void PORTC_OUTPUT_LOW(T_ULONG PIN);
void PORTD_OUTPUT_LOW(T_ULONG PIN);
void PORTE_OUTPUT_LOW(T_ULONG PIN);

//void PORTA_OUTPUT_TOGGLE(T_ULONG PIN);
void PORTB_OUTPUT_TOGGLE(T_ULONG PIN);
void PORTC_OUTPUT_TOGGLE(T_ULONG PIN);
void PORTD_OUTPUT_TOGGLE(T_ULONG PIN);
void PORTE_OUTPUT_TOGGLE(T_ULONG PIN);

//T_UBYTE PORTA_INPUT(T_ULONG PIN);
T_ULONG PORTB_INPUT(T_ULONG PIN);
T_ULONG PORTC_INPUT(T_ULONG PIN);
T_ULONG PORTD_INPUT(T_ULONG PIN);
T_ULONG PORTE_INPUT(T_ULONG PIN);

/*============================================================================*/

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
