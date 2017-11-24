/*
 * Port.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#include "General.h"          /* include peripheral declarations */
#include "Port.h"

void PORT_init (void) {

  PCC-> PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT C */
  PCC-> PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK;
  PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;
  PCC-> PCCn[PCC_PORTE_INDEX] = PCC_PCCn_CGC_MASK;

  PTD->PDDR |= 1<<0 ;
  PORTD->PCR[0] =  0x00000100;


  PTB->PDDR |= 1<<16 ;
  PORTB->PCR[16] =  0x00000100;

  PTB->PDDR |= 1<<15 ;
  PORTB->PCR[15] =  0x00000100;


  PTD->PDDR |= 1<<1 ;
  PORTD->PCR[1] =  0x00000100;

  PTD->PDDR |= 1<<2 ;
  PORTD->PCR[2] =  0x00000100;

  PTD->PDDR |= 1<<3 ;
  PORTD->PCR[3] =  0x00000100;

  PTD->PDDR |= 1<<6 ;
  PORTD->PCR[6] =  0x00000100;

  PTD->PDDR |= 1<<7 ;
  PORTD->PCR[7] =  0x00000100;

  PTD->PDDR |= 1<<10 ;
  PORTD->PCR[10] =  0x00000100;

  PTD->PDDR |= 1<<11 ;
  PORTD->PCR[11] =  0x00000100;

  PTD->PDDR |= 1<<12 ;
  PORTD->PCR[12] =  0x00000100;

  PTD->PDDR |= 1<<5 ;
  PORTD->PCR[5] =  0x00000100;

  PTD->PDDR |= 1<<16 ;
  PORTD->PCR[16] =  0x00000100;


  PTE->PDDR &= 1<<0 ;
  PORTE->PCR[0] =  0x00000110;

  PTE->PDDR &= 1<<9 ;
  PORTE->PCR[9] =  0x00000110;

  PTC->PDDR &= 1<<5 ;
  PORTC->PCR[5] =  0x00000110;

}
