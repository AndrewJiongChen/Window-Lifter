/*
 *SchM_Cfg.h
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
 * $Source: SchM_Cfg.h $
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
 * $Log: SchM_Cfg.h  $
  ============================================================================*/

#ifndef BSW_SERVICES_SCHM_SCHM_CFG_H_
#define BSW_SERVICES_SCHM_SCHM_CFG_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/

typedef enum{ /*Enumeraciones de las mascaras de cada task*/
	SCHM_MASK_2MS = (T_UBYTE) 0x01u,
	SCHM_MASK_4MS  = (T_UBYTE) 0x03u,
	SCHM_MASK_8MS  = (T_UBYTE) 0x07u,
	SCHM_MASK_16MS    = (T_UBYTE) 0x0Fu,
	SCHM_MASK_32MS    = (T_UBYTE) 0x1Fu,
	SCHM_MASK_64MS   = (T_UBYTE) 0x3Fu
}SchM_TaskMaskType;

typedef enum{ /*Enumeraciones del ID de las tareas a ejecutar*/
	SCHM_TASKID_BKG,
	SCHM_TASKID_2MS,
	SCHM_TASKID_4MS,
	SCHM_TASKID_8MS,
	SCHM_TASKID_16MS,
	SCHM_TASKID_32MS,
	SCHM_TASKID_64MS
}SchM_TaskIDType;

typedef enum{ /*Enumeraciones del offset de cada tarea*/
	SCHM_OFFSET_2MS = (T_UBYTE) 0x00u,
	SCHM_OFFSET_4MS  = (T_UBYTE) 0x01u,
	SCHM_OFFSET_8MS  = (T_UBYTE) 0x02u,
	SCHM_OFFSET_16MS    = (T_UBYTE) 0x03u,
	SCHM_OFFSET_32MS    = (T_UBYTE) 0x05u,
	SCHM_OFFSET_64MS   = (T_UBYTE) 0x06u
} SchM_TaskOffsetType;

typedef struct{ /*Configuracion de cada tarea del scheduler*/
	SchM_TaskIDType 	TaskID; /*ID de la tarea*/
	SchM_TaskMaskType 	TaskMask; /*Mascara de la tarea a ejecutar*/
	SchM_TaskOffsetType TaskOffset; /*Offset de la tarea*/
	tCallbackFunction TaskCallback; /*CallBack que hace referencia al tic*/
}SchM_TaskConfigType;


typedef struct { /*Configuracion general del scheduler*/
	uint8_t NumOfTasks; /*Numero de tareas del scheduler*/
	const SchM_TaskConfigType *TaskConfig; /*Apuntador a una nueva tarea a configurar*/
}SchM_ConfigType;

const SchM_ConfigType SchedulerConfig; /*Constante para configurar el scheduler*/

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */
