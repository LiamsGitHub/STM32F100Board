// This code provides simplest "signs of life" for STM32F100C8
// Routes internal high speed clock to MCO pin and toggles a GPIO line
// Liam Goudge March 2014

#include "Headers/STM32F100.h"
#include <stdio.h>



int main(void)
{
	printf("Hello World \n");

  // First switch on power to the GPIO unit. Allocate pin29 to MCO clock and pin30 to toggled port
  RCC_APB2ENR= 0x4; // Start clock to GPIO port A


  GPIOA_CRH = 0x19; // Set PA8 to be alternate function with GPIO push-pull (CNF=00) and Output GPIO 10MHz (MODE=01)
                    // Set PA9 to be GPIO push-pull (CNF=00) and Output GPIO 10MHz (MODE=01)

  // Now pulse pin PA9 in a loop
  volatile int i=0; // GNU compiler will optimize away the loop if i is not made volatile

  while(1) // Roughly 10 cycles per i=1. Total cycles per while loop is 118 for i=5. So pulse frq=(1/8MHz)x118 = 67.797KHz
  {
	  GPIOA_BSRR=0x200; // Set PA9
	  for (i=0;i<5;i++);
	  GPIOA_BSRR=0x2000000; // Clear PA9
	  for (i=0;i<20;i++);

      }
}




