/*
 * SchM_Cfg.c
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
 * $Source:  SchM_Cfg.c $
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
 * $Log: SchM_Cfg.c  $
  ============================================================================*/

  #include "SchM.h"
  #include "SchM_Tasks.h"

/* Includes */
/*============================================================================*/


/* Constants and types */
/*============================================================================*/

const SchM_TaskConfigType TaskDescriptor[]= /*Arreglo de las configuraciones de las tareas a ejecutar*/
{
		{
				SCHM_TASKID_2MS,
				SCHM_MASK_2MS,
				SCHM_OFFSET_2MS,
				SchM_2ms_Task
		},
		{
				SCHM_TASKID_4MS,
				SCHM_MASK_4MS,
				SCHM_OFFSET_4MS,
				SchM_4ms_Task
		},
		{
				SCHM_TASKID_8MS,
				SCHM_MASK_8MS,
				SCHM_OFFSET_8MS,
				SchM_8ms_Task
		},
		{
				SCHM_TASKID_16MS,
				SCHM_MASK_16MS,
				SCHM_OFFSET_16MS,
				SchM_16ms_Task
		},
		{
				SCHM_TASKID_32MS,
				SCHM_MASK_32MS,
				SCHM_OFFSET_32MS,
				SchM_32ms_Task
		},
		{
				SCHM_TASKID_64MS,
				SCHM_MASK_64MS,
				SCHM_OFFSET_64MS,
				SchM_64ms_Task
		}

};

const SchM_ConfigType SchedulerConfig = /*Obtiene la cantidad de tareas ejecutandose*/
{
		sizeof(TaskDescriptor)/sizeof(SchM_TaskConfigType), /*Saca el numero de tarea en el scheduler*/
		&TaskDescriptor[0] /*Apunta a la direccion del primer elemento del arreglo*/
};

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/


