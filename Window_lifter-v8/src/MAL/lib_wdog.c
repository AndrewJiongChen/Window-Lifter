/*
 * lib_wdog.c
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */
#include "MAL/lib_wdog.h"

void DISABLE_WDOG(){
	WDOG->CNT=0xD928C520; /*Unlock watchdog*/
	WDOG->TOVAL=0x0000FFFF; /*Maximum timeout value*/
	WDOG->CS = 0x00002100;
}
