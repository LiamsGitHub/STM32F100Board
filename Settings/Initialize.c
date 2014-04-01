#include "Headers/STM32F100.h"
void SystemInit(void);

void SystemInit (void)
{
	volatile uint32_t	regState;

	  //Set the Clock config register to: SYSCLK=PLL, PLL Source=HSI clock, PLL is x6, MCO=PLL/2 output at MCO pin 29
	//RCC_CFGR=0x4100002; // Sets MCO to output SYSCLK, PLL x6, HSI clock as PLL source, PLL as SYSCLK source

	  RCC_CFGR=0x5000000; //MCO output of HSI clock (8MHz)
	  //RCC_CFGR=0x4000000; //MCO output of SYSCLK

	regState=RCC_CR;
	regState=regState | 0x1000000 ; //switch on the PLL
	RCC_CR=regState;
}
