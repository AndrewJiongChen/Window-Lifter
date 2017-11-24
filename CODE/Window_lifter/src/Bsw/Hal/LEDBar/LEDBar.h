/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Cfg.h $
 * $Revision: 3 $
 * $Author: Georgina Salazar $
 * $Date: 22/11/2017 $
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
/*   Carlos Martinez   |         1.1        | Creation of the code            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Cfg.h  $
  ============================================================================*/
#ifndef BSW_HAL_LEDBAR_LEDBAR_H_
#define BSW_HAL_LEDBAR_LEDBAR_H_

/* Includes */
/*============================================================================*/
#include "dio.h"

/* Constants and types */
/*============================================================================*/
#define LB10 1
#define LB9  2
#define LB8  3
#define LB7  6
#define LB6  7
#define LB5  10
#define LB4  11
#define LB3  12
#define LB2  5
#define LB1  16


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void turnLEDBar(T_ULONG ledBarIndex);

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */
