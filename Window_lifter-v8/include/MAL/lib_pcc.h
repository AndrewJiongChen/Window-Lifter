/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_pcc.h $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 28/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Description of lib_pcc.c funtions to configures pcc registers
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
/*        Carlos       |       Version 1    | Describes lib_pcc.c functions   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef MAL_LIB_PCC_H_
#define MAL_LIB_PCC_H_

/* Includes */

#include "S32K144.h"
#include "MAL/def_lib.h"

/*============================================================================*/


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */

void enable_PCC_PORTB(void);
void enable_PCC_PORTC(void);
void enable_PCC_PORTD(void);
void enable_PCC_PORTE(void);
void enable_PCC_LPIT(void);

/*============================================================================*/

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
