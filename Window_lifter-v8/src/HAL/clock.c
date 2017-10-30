/*
 * clock.c
 *
 *  Created on: 27/10/2017
 *      Author: carlo
 */
#include "HAL/clock.h"

void config_XTAL(){
	SOSC_INIT_8MHZ();
	SPLL_INIT_160MHZ();
	NORMAL_RUN_MODE_80MHZ();
}

