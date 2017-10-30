/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: lib_scg.h $
 * $Revision: version 1 $
 * $Author: Carlos $
 * $Date: 28/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Describes functions of lib_scg.c
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
/*        Carlos       |       Version 1    | DEscribes lib_scg.c functions   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: lib_scg.h  $
  ============================================================================*/
#ifndef MAL_LIB_SCG_H_
#define MAL_LIB_SCG_H_

/* Includes */
/*============================================================================*/

#include "S32K144.h"
#include "MAL/def_lib.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */

void SOSC_INIT_8MHZ();
void SPLL_INIT_160MHZ();
void NORMAL_RUN_MODE_80MHZ();

/*============================================================================*/

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
