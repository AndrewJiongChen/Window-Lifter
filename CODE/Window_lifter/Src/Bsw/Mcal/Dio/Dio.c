/*
 * Dio.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#include "General.h"
#include "Dio.h"

GPIO_Type *Port[]= {PTA, PTB, PTC, PTD, PTE};

void Dio_PortSetPin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PSOR |= (1<<DioPin);
}

void Dio_PortClearPin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PCOR |= (1<<DioPin);
}

void Dio_PortTooglePin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PTOR |= (1<<DioPin);
}

uint8_t Dio_PortGetPin(DioPortType DioPort, uint32_t DioPin)
{
	if(Port[DioPort]->PDIR & (1<<DioPin)){
		return 1u;
	}else{
		return 0u;
	}
}
