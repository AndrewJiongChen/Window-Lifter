/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "Window_lifter_lib.h"

void DISABLE_WDOG(){
	WDOG_ADDR->CNT = 0xD928C520u;
	WDOG_ADDR->TOVAL = 0x0000FFFFu;
	WDOG_ADDR->CS = 0x00002100u;
}

void SOSC_INIT_8MHZ(){ //To activate XTAL
	SCG_ADDR->SCG_SOSCDIV = 0x00000101u; //Divide by 1
	SCG_ADDR->SCG_SOSCCFG = 0x00000024u; //Medium frequency
	while(SCG_ADDR->SCG_SOSCCSR & 0x800000u); //Ensure SOSCCSR unlocked
	SCG_ADDR->SCG_SOSCCSR=0x00000001u;
	while(!(SCG_ADDR->SCG_SOSCCSR & 0x1000000u));
}

void SPLL_INIT_160MHZ(){//
	while(SCG_ADDR->SCG_SPLLCSR & 0x800000u);
	SCG_ADDR->SCG_SPLLCSR = 0x00000000u;
	SCG_ADDR->SCG_SPLLDIV = 0x00000302u;
	SCG_ADDR->SCG_SPLLCFG = 0x00180000u;
	while(SCG_ADDR->SCG_SPLLCSR & 0x800000u);
	SCG_ADDR->SCG_SPLLCSR = 0x00000001u;
	while(!(SCG_ADDR->SCG_SPLLCSR & 0x1000000u));
}

void NORMAL_RUN_MODE_80MHZ(){//BUS CLOCK A 40 MHZ
	SCG_ADDR->SCG_RCCR = SCG_RCCR_SCS(6)
						|SCG_RCCR_DIVCORE(0b01)
						|SCG_RCCR_DIVBUS(0b01)
						|SCG_RCCR_DIVSLOW(0b10);
	while (((SCG_ADDR->SCG_CSR & 0xF000000u) >> 24u) != 6) {}
}

void LPIT0_INIT(){
	PCC_ADDR->PCC_INDEX[PCC_LPIT] = PCC_PCCn_PCS(6);
	PCC_ADDR->PCC_INDEX[PCC_LPIT] |= 0x40000000u;
	LPIT_ADDR->LPIT_MCR = 0x00000001u;
	LPIT_ADDR->LPIT_TVAL0 = 40000;
	LPIT_ADDR->LPIT_TCTRL0 = 0x00000001u;
}

void PORT_INIT(){
	PCC_ADDR->PCC_INDEX[PCC_PORTB]=0x40000000;
	PCC_ADDR->PCC_INDEX[PCC_PORTC]=0x40000000;
	PCC_ADDR->PCC_INDEX[PCC_PORTD]=0x40000000;
	PCC_ADDR->PCC_INDEX[PCC_PORTE]=0x40000000;
	//INPUTS
	//UP
	GPIO_PORTE->PDDR &= ~(1<<0); //PORTC_PIN4 Enabled as an input
	PORTE->PORT_PCR[0] = 0x00000110;
	//DOWN
	GPIO_PORTE->PDDR &= ~(1<<9);
	PORTE->PORT_PCR[9] = 0x00000110;
	//ANTIPINCH
	GPIO_PORTC->PDDR &= ~(1<<5);
	PORTC->PORT_PCR[5] = 0x00000110;
	/////OUTPUTS
	//LEDBLUE
	GPIO_PORTB->PDDR |= 1<<16;
	PORTB->PORT_PCR[16] = 0x00000100;
	//LEDGREEN
	GPIO_PORTB->PDDR |= 1<<15;
	PORTB->PORT_PCR[15] = 0x00000100;
	//LEDBAR1
	GPIO_PORTC->PDDR |= 1<<14;
	PORTC->PORT_PCR[14] = 0x00000100;
	//LEDBAR2
	GPIO_PORTC->PDDR |= 1<<3;
	PORTC->PORT_PCR[3] = 0x00000100;
	//LEDBAR3
	GPIO_PORTE->PDDR |= 1<<16;
	PORTE->PORT_PCR[16] = 0x00000100;
	//LEDBAR4
	GPIO_PORTE->PDDR |= 1<<15;
	PORTE->PORT_PCR[15] = 0x00000100;
	//LEDBAR5
	GPIO_PORTE->PDDR |= 1<<14;
	PORTE->PORT_PCR[14] = 0x00000100;
	//LEDBAR6
	GPIO_PORTE->PDDR |= 1<<13;
	PORTE->PORT_PCR[13] = 0x00000100;
	//LEDBAR7
	GPIO_PORTE->PDDR |= 1<<1;
	PORTE->PORT_PCR[1] = 0x00000100;
	//LEDBAR8
	GPIO_PORTD->PDDR |= 1<<7;
	PORTD->PORT_PCR[7] = 0x00000100;
	//LEDBAR9
	GPIO_PORTD->PDDR |= 1<<6;
	PORTD->PORT_PCR[6] = 0x00000100;
	//LEDBAR10
	GPIO_PORTC->PDDR |= 1<<15;
	PORTC->PORT_PCR[15] = 0x00000100;
}

void BAR_ON(){
	GPIO_PORTC->PTOR |= 1<<14;
	GPIO_PORTC->PTOR |= 1<<3;
	GPIO_PORTE->PTOR |= 1<<16;
	GPIO_PORTE->PTOR |= 1<<15;
	GPIO_PORTE->PTOR |= 1<<14;
	GPIO_PORTE->PTOR |= 1<<13;
	GPIO_PORTE->PTOR |= 1<<1;
	GPIO_PORTD->PTOR |= 1<<7;
	GPIO_PORTD->PTOR |= 1<<6;
	GPIO_PORTC->PTOR |= 1<<15;
}

void BAR_CTRL(T_UBYTE t_uLed){
	if(t_uLed==1){
		GPIO_PORTC->PTOR |= 1<<14;
	}
	if(t_uLed==2){
		GPIO_PORTC->PTOR |= 1<<3;
	}
	if(t_uLed==3){
		GPIO_PORTE->PTOR |= 1<<16;
	}
	if(t_uLed==4){
		GPIO_PORTE->PTOR |= 1<<15;
	}
	if(t_uLed==5){
		GPIO_PORTE->PTOR |= 1<<14;
	}
	if(t_uLed==6){
		GPIO_PORTE->PTOR |= 1<<13;
	}
	if(t_uLed==7){
		GPIO_PORTE->PTOR |= 1<<1;
	}
	if(t_uLed==8){
		GPIO_PORTD->PTOR |= 1<<7;
	}
	if(t_uLed==9){
		GPIO_PORTD->PTOR |= 1<<6;
	}
	if(t_uLed==10){
		GPIO_PORTC->PTOR |= 1<<15;
	}
}

int main(void){
	T_ULONG T_UAUX=0u,t_tCount=0u,t_tBar=10u,t_tBan=0u,t_tSt=0,t_tAPC=0;
	DISABLE_WDOG();
	PORT_INIT();
	SOSC_INIT_8MHZ();
	SPLL_INIT_160MHZ();
	NORMAL_RUN_MODE_80MHZ();
	LPIT0_INIT();
	BAR_ON();
	for(;;){
		while(0==(LPIT_ADDR->LPIT_MSR & 0x1u)){}
		if(T_UAUX==0u){
			if((GPIO_PORTE->PDIR & (1<<9) && t_tCount<10)){//10
				t_tCount++;
				T_UAUX=0;
			}else{
				if((GPIO_PORTE->PDIR & (1<<9)) && t_tCount == 10){//10
					t_tCount=0;
					T_UAUX=1;
				}else{
					T_UAUX=0;
					if(t_tBan<500 && t_tSt==1){
						T_UAUX=5;
					}
					if(t_tBan<500 && t_tSt==2){
						T_UAUX=6;
					}
				}
			}
		}
		if(T_UAUX==1){
			if((GPIO_PORTE->PDIR & (1<<9))){
				GPIO_PORTB->PSOR |= 1<<15;
				T_UAUX=2;
			}else{
				GPIO_PORTB->PCOR |= 1<<15;
				T_UAUX=0;
			}
		}
		if(T_UAUX==2){
			if((GPIO_PORTE->PDIR & (1<<9))){
				if(t_tBan<500){
					t_tBan++;
					if(t_tBar>0 && t_tCount<400){//400
						t_tCount++;
					}else{
						if(t_tBar>0){
							BAR_CTRL(t_tBar);
							t_tCount=0;
							t_tBar--;
						}else{
							GPIO_PORTB->PCOR |= 1<<15;
							T_UAUX=0;
							t_tCount=0;
							t_tBan=0;
						}
					}
					t_tSt=1;
				}else{
					t_tSt=0;
					if(t_tBar>0 && t_tCount<400){
						t_tCount++;
					}else{
						if(t_tBar>0){
							BAR_CTRL(t_tBar);
							t_tCount=0;
							t_tBar--;
						}else{
							GPIO_PORTB->PCOR |= 1<<15;
							T_UAUX=0;
							t_tCount=0;
							t_tBan=0;
						}
					}
				}
			}else{
				GPIO_PORTB->PCOR |= 1<<15;
				T_UAUX=0;
				t_tBan=0;
				t_tCount=0;
			}
		}

		if(T_UAUX==0 && GPIO_PORTE->PDIR & (1<<0)){
			if(GPIO_PORTE->PDIR & (1<<0) && t_tCount<10){
				t_tCount++;
				T_UAUX=0;
			}else{
				if(GPIO_PORTE->PDIR & (1<<0)){
					t_tCount=0;
					T_UAUX=3;
				}else{
					T_UAUX=0;
				}
			}
		}

		if(T_UAUX==3){
			if(GPIO_PORTE->PDIR & (1<<0)){
				GPIO_PORTB->PSOR |= 1<<16;
				T_UAUX=4;
			}else{
				GPIO_PORTB->PCOR |= 1<<16;
				T_UAUX=0;
			}
		}

		if(T_UAUX==4){
			if(GPIO_PORTE->PDIR & (1<<0)){
				if(t_tBan<500){
					t_tBan++;
					if(t_tBar<=9 && t_tCount<400){
						t_tCount++;
					}else{
						if(t_tBar<=9){
							t_tBar++;
							BAR_CTRL(t_tBar);
							t_tCount=0;
						}else{
							GPIO_PORTB->PCOR |= 1<<16;
							T_UAUX=0;
							t_tCount=0;
							t_tBan=0;
						}
					}
					t_tSt=2;
				}else{
					t_tSt=0;
					if(t_tBar<=9 && t_tCount<400){
						t_tCount++;
					}else{
						if(t_tBar<=9){
							t_tBar++;
							BAR_CTRL(t_tBar);
							t_tCount=0;
						}else{
							GPIO_PORTB->PCOR |= 1<<16;
							T_UAUX=0;
							t_tCount=0;
							t_tBan=0;
						}
					}
				}
			}else{
				GPIO_PORTB->PCOR |= 1<<16;
				T_UAUX=0;
				t_tBan=0;
				t_tCount=0;
			}
		}

		if(T_UAUX==5){
			if(t_tBar>0 && t_tCount<400){ //400
				t_tCount++;
			}else{
				if(t_tBar>0){
					GPIO_PORTB->PSOR |= 1<<15;
					BAR_CTRL(t_tBar);
					t_tCount=0;
					t_tBar--;
				}else{
					GPIO_PORTB->PCOR |= 1<<15;
					T_UAUX=0;
					t_tCount=0;
					t_tSt=0;
					t_tBan=0;
				}
			}
		}

		if(T_UAUX==6){
			if(t_tBar<=9 && t_tCount<400){
				t_tCount++;
			}else{
				if(t_tBar<=9){
					GPIO_PORTB->PSOR |= 1<<16;
					t_tBar++;
					BAR_CTRL(t_tBar);
					t_tCount=0;
				}else{
				GPIO_PORTB->PCOR |= 1<<16;
					T_UAUX=0;
					t_tCount=0;
					t_tSt=0;
					t_tBan=0;
				}
			}
		}

		if((GPIO_PORTC->PDIR & 1<<5) && (t_tAPC<10)){
			t_tAPC++;
		}else{
			if((GPIO_PORTC->PDIR & 1<<5) && T_UAUX==4){
				T_UAUX=7;
				GPIO_PORTB->PCOR |= 1<<16;

			}
			if((GPIO_PORTC->PDIR & 1<<5) && T_UAUX==6){
				T_UAUX=7;
				GPIO_PORTB->PCOR |= 1<<16;
			}
		}

		if(T_UAUX==7){
			if(t_tBar>0 && t_tCount<400){ //400
				t_tCount++;
			}else{
				if(t_tBar>0){
					GPIO_PORTB->PSOR |= 1<<15;
					BAR_CTRL(t_tBar);
					t_tCount=0;
					t_tBar--;
				}else{
					GPIO_PORTB->PCOR |= 1<<15;
					T_UAUX=0;
					t_tCount=0;
					t_tSt=0;
					t_tBan=0;
				}
			}
		}
		LPIT_ADDR->LPIT_MSR |= 0x1u;
	}
}
