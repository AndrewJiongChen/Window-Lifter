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
#ifndef BSW_APP_WINDOWLIFTER_H_
#define BSW_APP_WINDOWLIFTER_H_

/* Includes */
/*============================================================================*/
#include "LEDs.h"
#include "Buttons.h"
#include "LEDBar.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void resetSystem();
T_UBYTE validateButton(T_UBYTE button);
void windowDown();
void windowUp();
void stateOne();
void stateTwo();
void stateFour();
void stateEight();
void automaticWindowDown();
void automaticWindowUp();
void antiPinchFunction();
void antiPinchRoutine();
void delay_s(T_UBYTE seconds);
#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */

