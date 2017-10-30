/*
 * Window_lifter_lib.h
 *
 *  Created on: 21/10/2017
 *      Author: Carlos
 *      MAL of Window Lifter Project
 */

#ifndef WINDOW_LIFTER_LIB_H_
#define WINDOW_LIFTER_LIB_H_

#define NULL ((void*)0ul)

typedef unsigned long T_ULONG; //4 Bytes
typedef unsigned char T_UBYTE; //1byte

///////////////////////////Watchdog timer////////////////////////////////
typedef struct{
	T_ULONG CS;
	T_ULONG CNT;
	T_ULONG TOVAL;
	T_ULONG WIN;
}WDOG; //Watchdog timer

#define WDOG_REG_ADDR 0x40052000 //Address direction of WDOG register
WDOG *WDOG_ADDR = (WDOG*) WDOG_REG_ADDR; //Pointer to the WDOG address
////////////////////////////////////////////////////////////////////////
///////////////GENERAL PURPOSE INPUTS AND OUTPUTS///////////////////////
typedef struct{
	T_ULONG PDOR;
	T_ULONG PSOR;
	T_ULONG PCOR;
	T_ULONG PTOR;
	T_ULONG PDIR;
	T_ULONG PDDR;
	T_ULONG PIDR;
}GPIO; //General Purpose Inputs and Outputs.

#define GPIO_PORTA_REG_ADDR 0x400FF000
#define GPIO_PORTB_REG_ADDR 0x400FF040
#define GPIO_PORTC_REG_ADDR 0x400FF080
#define GPIO_PORTD_REG_ADDR 0x400FF0C0
#define GPIO_PORTE_REG_ADDR 0x400FF100

GPIO *GPIO_PORTA = (GPIO*) GPIO_PORTA_REG_ADDR;
GPIO *GPIO_PORTB = (GPIO*) GPIO_PORTB_REG_ADDR;
GPIO *GPIO_PORTC = (GPIO*) GPIO_PORTC_REG_ADDR;
GPIO *GPIO_PORTD = (GPIO*) GPIO_PORTD_REG_ADDR;
GPIO *GPIO_PORTE = (GPIO*) GPIO_PORTE_REG_ADDR;
///////////////////////////////////////////////////////////////////////
/////////////////////Peripheral Clock Controller///////////////////////
typedef struct{
	T_ULONG PCC_INDEX[116];
}PCC; //Peripheral Clock Controller

#define PCC_REG_ADDR 0x40065000
PCC *PCC_ADDR = (PCC*) PCC_REG_ADDR; //Pointer to Peripheral Clock Controller address

#define PCC_FTFC 32
#define PCC_DMAMUX 33
#define PCC_FlexCAN 36
#define PCC_FlexCAN1 37
#define PCC_FTM3 38
#define PCC_ADC1 39
#define PCC_FlexCAN2 43
#define PCC_LPSPI0 44
#define PCC_LPSPI1 45
#define PCC_LPSPI2 46
#define PCC_PDB1 49
#define PCC_CRC 50
#define PCC_PDB0 54
#define PCC_LPIT 55
#define PCC_FTM0 56
#define PCC_FTM1 57
#define PCC_FTM2 58
#define PCC_ADC0 59
#define PCC_RTC 61
#define PCC_LPTMR0 64
#define PCC_PORTA 73
#define PCC_PORTB 74
#define PCC_PORTC 75
#define PCC_PORTD 76
#define PCC_PORTE 77
#define PCC_FlexIO 90
#define PCC_EWM 97
#define PCC_LPI2C0 102
#define PCC_LPUART0 106
#define PCC_LPUART1 107
#define PCC_LPUART2 108
#define PCC_CMP0 115

#define PCC_PCCn_PCS(x) (((T_ULONG)(((T_ULONG)(x))<<24u))&0x7000000u)
///////////////////////////////////////////////////////////////////////
/////////////////////////////////PORT//////////////////////////////////
typedef struct{
	T_ULONG PORT_PCR[32];
	T_ULONG PORT_GPCLR;
	T_ULONG PORT_GPCHR;
	T_ULONG PORT_GICLR;
	T_ULONG PORT_GICHR;
	T_ULONG PORT_ISFR;
	T_ULONG PORT_DFER;
	T_ULONG PORT_DFCR;
	T_ULONG PORT_DFWR;
}PORT; //PORT

#define PORTA_REG_ADDR 0X40049000
#define PORTB_REG_ADDR 0X4004A000
#define PORTC_REG_ADDR 0X4004B000
#define PORTD_REG_ADDR 0X4004C000
#define PORTE_REG_ADDR 0X4004D000

PORT *PORTA = (PORT*)PORTA_REG_ADDR;
PORT *PORTB = (PORT*)PORTB_REG_ADDR;
PORT *PORTC = (PORT*)PORTC_REG_ADDR;
PORT *PORTD = (PORT*)PORTD_REG_ADDR;
PORT *PORTE = (PORT*)PORTE_REG_ADDR;
/////////////////////////////////////////////////////////////////////////
//////////////////////SYSTEM CLOCK GENERATOR/////////////////////////////
typedef struct{
	T_ULONG SCG_VERID;
	T_ULONG SCG_PARAM;
	T_UBYTE RESERVED_0[8];
	T_ULONG SCG_CSR;
	T_ULONG SCG_RCCR;
	T_ULONG SCG_VCCR;
	T_ULONG SCG_HCCR;
	T_ULONG SCG_CLKOUTCNFG;
	T_UBYTE RESERVED_1[220];
	T_ULONG SCG_SOSCCSR;
	T_ULONG SCG_SOSCDIV;
	T_ULONG SCG_SOSCCFG;
	T_UBYTE RESERVED_2[244];
	T_ULONG SCG_SIRCCSR;
	T_ULONG SCG_SIRCDIV;
	T_ULONG SCG_SIRCCFG;
	T_UBYTE RESERVED_3[244];
	T_ULONG SCG_FIRCCSR;
	T_ULONG SCG_FIRCDIV;
	T_ULONG SCG_FIRCCFG;
	T_UBYTE RESERVED_4[756];
	T_ULONG SCG_SPLLCSR;
	T_ULONG SCG_SPLLDIV;
	T_ULONG SCG_SPLLCFG;
}SCG;//System clock generator

#define SCG_RCCR_SCS(x) (((T_ULONG)(((T_ULONG)(x))<<24u))&0xF000000u)
#define SCG_RCCR_DIVCORE(x) (((T_ULONG)(((T_ULONG)(x))<<16u))&0xF0000u)
#define SCG_RCCR_DIVBUS(x) (((T_ULONG)(((T_ULONG)(x))<<4u))&0xF0u)
#define SCG_RCCR_DIVSLOW(x) (((T_ULONG)(((T_ULONG)(x))<<0u))&0xFu)

#define SCG_REG_ADDR 0x40064000

SCG *SCG_ADDR = (SCG*)SCG_REG_ADDR;
/////////////////////////////////////////////////////////////////////////
///////////////////////LOW POWER INTERRUPT TIMER/////////////////////////
typedef struct{
	T_ULONG LPIT_VERID;
	T_ULONG LPIT_PARAM;
	T_ULONG LPIT_MCR;
	T_ULONG LPIT_MSR;
	T_ULONG LPIT_MIER;
	T_ULONG LPIT_SETTEN;
	T_ULONG LPIT_CLRTEN;
	T_ULONG RESERVED_0;
	T_ULONG LPIT_TVAL0;
	T_ULONG LPIT_CVAL0;
	T_ULONG LPIT_TCTRL0;
	T_ULONG RESERVED_1;
	T_ULONG LPIT_TVAL1;
	T_ULONG LPIT_CVAL1;
	T_ULONG LPIT_TCTRL1;
	T_ULONG RESERVED_2;
	T_ULONG LPIT_TVAL2;
	T_ULONG LPIT_CVAL2;
	T_ULONG LPIT_TCTRL2;
	T_ULONG RESERVED_3;
	T_ULONG LPIT_TVAL3;
	T_ULONG LPIT_CVAL3;
	T_ULONG LPIT_TCTRL3;
}LPIT;//LOW POWER INTERRUPT TIMER

#define LPIT_REG_ADDR 0x40037000u

LPIT *LPIT_ADDR = (LPIT*)LPIT_REG_ADDR;
/////////////////////////////////////////////////////////////////////////

#endif /* WINDOW_LIFTER_LIB_H_ */
