/*
 * main implementation: use this 'C' sample to create your own application
 *
 */


#include "APP/windowlifter.h"

int main(void) {
	T_ULONG t_uState=0,t_uCounter=0,t_uAPCounter=0,t_uAPValid=0;;
	T_UBYTE t_uAPSt=0,t_uBCtrl=10;
	WDOG_DISABLE();
	WL_INIT();
	config_XTAL();
	set_delay_ms(1);
	BAR_ON();
	for (;;) { /* Toggle output to LED every LPIT0 timeout */
		delay_start();
		if(t_uState==0){ /*First state of states machine, window is closed*/
			if((1==BTN_DOWN())&& t_uCounter<10){
				t_uCounter++;
				t_uState=0;
			}else{
				if(1==BTN_DOWN()){
					t_uCounter=0;
					t_uState=1;
				}else{
					t_uState=0;
					if(t_uAPCounter<500 && t_uAPSt==1){
						t_uState=5;
					}
					if(t_uAPCounter<500 && t_uAPSt==2){
						t_uState=6;
					}
				}
			}
		}
		if(t_uState==1){ /*Second state of states machine, validate button down and turn on led green*/
			if(1==BTN_DOWN()){
				LED_GREEN_ON();
				t_uState=2;
			}else{
				LED_GREEN_OFF();
				t_uState=0;
			}
		}
		if(t_uState==2){
			if(1==BTN_DOWN()){
				if(t_uAPCounter<500){
					t_uAPCounter++;
					if(t_uBCtrl>0 && t_uCounter<400){
						t_uCounter++;
					}else{
						if(t_uBCtrl>0){
							BAR_CTRL(t_uBCtrl);
							t_uCounter=0;
							t_uBCtrl--;
						}else{
							LED_GREEN_OFF();
							t_uState=0;
							t_uCounter=0;
							t_uAPCounter=0;
						}
					}
					t_uAPSt=1;
				}else{
					t_uAPSt=0;
					if(t_uBCtrl>0 && t_uCounter<400){
						t_uCounter++;
					}else{
						if(t_uBCtrl>0){
							BAR_CTRL(t_uBCtrl);
							t_uCounter=0;
							t_uBCtrl--;
						}else{
							LED_GREEN_OFF();
							t_uState=0;
							t_uCounter=0;
							t_uAPCounter=0;
						}
					}
				}
			}else{
				LED_GREEN_OFF();
				t_uState=0;
				t_uCounter=0;
			}
		}

		if(t_uState==0 && (1==BTN_UP())){
			if((1==BTN_UP()) && t_uCounter<10){
				t_uCounter++;
				t_uState=0;
			}else{
				if(1==BTN_UP()){
					t_uCounter=0;
					t_uState=3;
				}else{
					t_uState=0;
				}
			}
		}

		if(t_uState==3){
			if(1==BTN_UP()){
				LED_BLUE_ON();
				t_uState=4;
			}else{
				LED_BLUE_OFF();
				t_uState=0;
			}
		}

		if(t_uState==4){
			if(1==BTN_UP()){
				if(t_uAPCounter<500){
					t_uAPCounter++;
					if(t_uBCtrl<=9 && t_uCounter<400){
						t_uCounter++;
					}else{
						if(t_uBCtrl<=9){
							t_uBCtrl++;
							BAR_CTRL(t_uBCtrl);
							t_uCounter=0;
						}else{
							LED_BLUE_OFF();
							t_uState=0;
							t_uCounter=0;
							t_uAPCounter=0;
						}
					}
					t_uAPSt=2;
				}else{
					t_uAPSt=0;
					if(t_uBCtrl>0 && t_uCounter<400){
						t_uCounter++;
					}else{
						if(t_uBCtrl<=9){
							t_uBCtrl++;
							BAR_CTRL(t_uBCtrl);
							t_uCounter=0;
						}else{
							LED_BLUE_OFF();
							t_uState=0;
							t_uCounter=0;
							t_uAPCounter=0;
						}
					}
				}
			}else{
				LED_BLUE_OFF();
				t_uState=0;
				t_uCounter=0;
				t_uAPCounter=0;
			}
		}

		if(t_uState==5){
			if(t_uBCtrl>0 && t_uCounter<400){
				t_uCounter++;
			}else{
				if(t_uBCtrl>0){
					LED_GREEN_ON();
					BAR_CTRL(t_uBCtrl);
					t_uCounter=0;
					t_uBCtrl--;
				}else{
					LED_GREEN_OFF();
					t_uState=0;
					t_uCounter=0;
					t_uAPCounter=0;
					t_uAPSt=0;
				}
			}
		}

		if(t_uState==6){
			if(t_uBCtrl<=9 && t_uCounter<400){
				t_uCounter++;
			}else{
				if(t_uBCtrl<=9){
					LED_BLUE_ON();
					t_uBCtrl++;
					BAR_CTRL(t_uBCtrl);
					t_uCounter=0;
				}else{
					LED_BLUE_OFF();
					t_uState=0;
					t_uCounter=0;
					t_uAPCounter=0;
					t_uAPSt=0;
				}
			}
		}

		if((1==ANTI_PINCH()) && (t_uAPValid<10)){
			t_uAPValid++;
		}else{
			if((1==ANTI_PINCH()) && t_uState==4){
				t_uState=7;
				LED_BLUE_OFF();

			}
			if((1==ANTI_PINCH()) && t_uState==6){
				t_uState=7;
				LED_BLUE_OFF();
			}
		}

		if(t_uState==7){
			if(t_uBCtrl>0 && t_uCounter<400){
				t_uCounter++;
			}else{
				if(t_uBCtrl>0){
					LED_GREEN_ON();
					BAR_CTRL(t_uBCtrl);
					t_uCounter=0;
					t_uBCtrl--;
				}else{
					LED_GREEN_OFF();
					t_uState=8;
					t_uCounter=0;
					t_uAPCounter=0;
					t_uAPSt=0;
				}
			}
		}

		if(t_uState==8){
			if(t_uCounter<5000){
				t_uCounter++;
			}else{
				t_uCounter=0;
				t_uState=0;
			}
		}
	}
}
