/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.h $
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
/*  Carlos Martinez    |         4.1        | Scheduler Window Lifter         */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.h  $
  ============================================================================*/

#ifndef BSW_SERVICES_SCHM_SCHM_TASKS_H_
#define BSW_SERVICES_SCHM_SCHM_TASKS_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"
#include "windowlifter.h"

/* Constants and types */
/*============================================================================*/

#define transitions 0


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

extern void SchM_2ms_Task(void);
extern void SchM_4ms_Task(void);
extern void SchM_8ms_Task(void);
extern void SchM_16ms_Task(void);
extern void SchM_32ms_Task(void);
extern void SchM_64ms_Task(void);


#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */

