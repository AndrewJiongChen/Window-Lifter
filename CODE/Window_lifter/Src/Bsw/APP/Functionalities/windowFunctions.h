/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowFunctions.h $
 * $Revision: 1 $
 * $Author: Carlos Martinez $
 * $Date: 03/12/2017 $
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
#ifndef BSW_APP_FUNCTIONALITIES_WINDOWFUNCTIONS_H_
#define BSW_APP_FUNCTIONALITIES_WINDOWFUNCTIONS_H_

/* Includes */
/*============================================================================*/
#include "LEDs.h"
#include "Buttons.h"
#include "LEDBarDriver.h"


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
T_UBYTE reset();
T_UBYTE initializeWindowLifter();
T_UBYTE validateButtonDown();
T_UBYTE modeFunctionalityValidationDown();
T_UBYTE automaticDownward();
T_UBYTE manualDownward();
T_UBYTE transitionState();
T_UBYTE validateButtonUp();
T_UBYTE modeFunctionalityValidationUp();
T_UBYTE automaticUpward();
T_UBYTE validateAntiPinch();
T_UBYTE delay5S();
#endif /* BSW_APP_FUNCTIONALITIES_WINDOWFUNCTIONS_H_ */
