/*
 * SchM.c
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
 * $Source: SchM.c $
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
 * $Log: SchM.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "General.h"
#include "SchM.h"
#include "Lpit.h"
#include "Dio.h"

/* Constants and types */
/*============================================================================*/

#define NUM_OF_TASKS (0x6)
const SchM_ConfigType *GlbSchMConfig; /*Apuntador a la estructura de configuracion del scheduler*/

/* Exported Variables */
/*============================================================================*/

SchM_TaskControlBlockType SchM_TaskControlBlock[NUM_OF_TASKS]; /*Variable para controlar los estados de las tareas*/
SchM_SchedulerStatusType SchM_SchedulerStatus; /*Variable para el estatus del scheduler*/

Flags FlagsScheduler={
	0,0
};

/* Exported functions prototypes */
/*============================================================================*/
void SchM_OsTick( void )
{
	uint8_t LocTaskIdx;

	SchM_SchedulerStatus.OsTickCounter++;

	//Set Ready the Task if mask match the Counter
	for(LocTaskIdx = 0; LocTaskIdx < GlbSchMConfig->NumOfTasks; LocTaskIdx++){

		if((SchM_SchedulerStatus.OsTickCounter & GlbSchMConfig->TaskConfig[LocTaskIdx].TaskMask) == GlbSchMConfig->TaskConfig[LocTaskIdx].TaskOffset){
				if(FlagsScheduler.FlagTaskState == 1){
					FlagsScheduler.FlagOverLoad = 1;
					TurnOnOverloadPin();
				}
				SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState=SCHM_TASK_STATE_READY;
				FlagsScheduler.FlagTaskState = 1;
		}
	}
}

void SchM_Background( void ) /*Funcion de background del scheduler*/
{
	uint8_t LocTaskIdx;
	for(;;)
	{
		for(LocTaskIdx = 0; LocTaskIdx < GlbSchMConfig->NumOfTasks; LocTaskIdx++)
		{
			if ( SCHM_TASK_STATE_READY == SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState )
			{
				SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState = SCHM_TASK_STATE_RUNNING; /*Se asigna a la tarea el estado de running*/
				SchM_SchedulerStatus.SchM_SchedulerState = SCHM_RUNNING; /*El estado del scheduler es activo*/
				TurnOffBackgroundPin(); /*Apagar salida de background*/
				GlbSchMConfig->TaskConfig[LocTaskIdx].TaskCallback();/**/
				SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState = SCHM_TASK_STATE_SUSPENDED; /*Se suspende la tarea*/
				//Clear the Flag that indicates that there is one Task Activated.
				FlagsScheduler.FlagTaskState = 0 ;
				SchM_SchedulerStatus.SchM_SchedulerState = SCHM_IDLE; /*El estado del scheduler se queda en modo de letargo*/
				TurnOnBackgroundPin();/*Se enciende background pin*/
			}
		}
	}
}

void SchM_Init( const SchM_ConfigType *SchMConfig ) /*Inicializa el scheduler*/
{
	GlbSchMConfig = SchMConfig;
	uint8_t LocTaskIdx; //Para identificar la tarea
	SchM_SchedulerStatus.SchM_SchedulerState = SCHM_UNINIT; /*El scheduler se coloca con el estado de no inicializado*/

	for(LocTaskIdx = 0; LocTaskIdx < GlbSchMConfig->NumOfTasks; LocTaskIdx++) /*Son 6 tareas*/
	{
		SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState = SCHM_TASK_STATE_SUSPENDED; /*Todas las tareas se inicicializan como suspendidas*/
	}

	LPIT0_init(SchM_OsTick);            /* Initialize PIT0 for 781.25 micro-seconds timeout & Callback Install */

	SchM_SchedulerStatus.SchM_SchedulerState = SCHM_INIT; /*Se asigna al scheduler el estado de inicializacion*/
}

void SchM_Start( void )
{
	LPIT0_Start();
	SchM_Background();
}

void SchM_Stop( void )
{
	LPIT0_Stop();
}

void TurnOnOverloadPin(void){

}

void TurnOnBackgroundPin(void){

}

void TurnOffBackgroundPin(void){


}
