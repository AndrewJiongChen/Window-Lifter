/*
 * SchM.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.h $
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
/*  Francisco Martinez |         1.1        | Creation of the code            */
/*  Rafael Cabrera     |         2.1        | Fixes and updates               */
/*  Georgina Salazar   |         3.1        | Adaptation for the practice     */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_H_
#define BSW_SERVICES_SCHM_SCHM_H

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "SchM_Cfg.h"
#include "SchM_Types.h"

/* Constants and types */
/*============================================================================*/

typedef struct{ //BIT FIELD
    uint8_t FlagOverLoad: 1;    //Flag for indicating that an Overload have occured
    uint8_t FlagTaskState:1;    //Flag for indicating that there is a task in Ready/Running state
} Flags;

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
extern void SchM_Init( const SchM_ConfigType *SchMConfig );
extern void SchM_Start( void );
extern void SchM_Stop( void );
void TurnOnOverloadPin(void);
void TurnOnBackgroundPin(void);
void TurnOffBackgroundPin(void);

#endif /* BSW_SERVICES_SCHM_SCHM_H_ */
