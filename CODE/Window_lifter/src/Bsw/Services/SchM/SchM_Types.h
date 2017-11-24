/*
 * SchM_Types.h
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
 * $Source: SchM_Types.h $
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
 * $Log: SchM_Types.h  $
  ============================================================================*/

  #ifndef BSW_SERVICES_SCHM_SCHM_TYPES_H_
  #define BSW_SERVICES_SCHM_SCHM_TYPES_H_

/* Includes */
/*============================================================================*/

  #include "Std_Types.h"

/* Constants and types */
/*============================================================================*/
typedef enum /*Enumeracion del estado de la tarea, si esta suspendida, lista o corriendo*/
{
	SCHM_TASK_STATE_SUSPENDED,
	SCHM_TASK_STATE_READY,
	SCHM_TASK_STATE_RUNNING
}SchM_TaskStateType;

typedef enum /*Enumeracion del estado del scheduler */
{
	SCHM_UNINIT,
	SCHM_INIT,
	SCHM_IDLE,
	SCHM_RUNNING,
	SCHM_OVERLOAD,
	SCHM_HALTED
}SchM_SchedulerStateType;

typedef struct
{
	SchM_TaskStateType SchM_TaskState;
}SchM_TaskControlBlockType;/*Estructura para controlar controlar los estados de las tareas*/

typedef struct
{
	uint16_t	OsTickCounter; /*Conteo de los ticks*/
	SchM_SchedulerStateType SchM_SchedulerState; /*Se revisa el estado del sheduler*/
}SchM_SchedulerStatusType;

/* Exported Variables */
/*============================================================================*/



/* Exported functions prototypes */
/*============================================================================*/


#endif /* BSW_SERVICES_SCHM_SCHM_TYPES_H_ */
