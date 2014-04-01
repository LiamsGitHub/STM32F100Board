// Header file for STM32F100 peripheral set

typedef	unsigned int uint32_t;

// Reset and Clock Control (RCC)
#define RCC_BASE			((uint32_t) 0x40021000)
#define RCC_CR				(*(volatile unsigned long *)(RCC_BASE + 0x00)) // RCC Clock Control Register. Offset=0x00
#define RCC_CFGR			(*(volatile unsigned long *)(RCC_BASE + 0x04)) // Clock configuration register. Offset=0x4
#define RCC_APB1ENR			(*(volatile unsigned long *)(RCC_BASE + 0x1C)) // APB1 peripheral clock enable register. Offset=0x1C
#define RCC_APB2ENR			(*(volatile unsigned long *)(RCC_BASE + 0x18)) // APB2 peripheral clock enable register. Offset=0x18




// GPIO Port Registers
// GPIO Port A
#define GPIOA_BASE			((uint32_t) 0x40010800)
#define GPIOA_CRL			(*(volatile unsigned long *)(GPIOA_BASE + 0x00)) // GPIO port A. Port configuration register low. Offset=0x0
#define GPIOA_CRH	 		(*(volatile unsigned long *)(GPIOA_BASE + 0x04))
#define GPIOA_BSRR			(*(volatile unsigned long *)(GPIOA_BASE + 0x10)) // GPIO port A. Bit set/reset register. Offset = 0x10


// ADC1 Registers
#define ADC1_BASE			((uint32_t) 0x40012400)
#define ADC_SR             	(*(volatile unsigned long *)(ADC1_BASE + 0x00)) // ADC Status Register. Offset = 0x0
#define ADC_CR2            	(*(volatile unsigned long *)(ADC1_BASE + 0x08)) // ADC Control Register 2. Offset = 0x8
#define ADC_SMPR2          	(*(volatile unsigned long *)(ADC1_BASE + 0x10)) // ADC Sample time Register 2. Offset = 0x10
#define ADC_SQR3           	(*(volatile unsigned long *)(ADC1_BASE + 0x34)) // ADC Regular Sequence Register3. Offset = 0x34
#define ADC_DR             	(*(volatile unsigned long *)(ADC1_BASE + 0x4C)) // ADC Regular Data Register. Offset = 0x4C


// DAC Registers
#define DAC_BASE			((uint32_t) 0x40007400)
#define DAC_CR             	(*(volatile unsigned long *)(DAC_BASE + 0x00)) // Applies to both DAC1 and DAC2. Offset = 0x0
#define DAC_DHR12R1        	(*(volatile unsigned long *)(DAC_BASE + 0x08)) // DAC1 data holding register for right aligned 12-bit mode. Offset = 0x8
#define DAC_DHR12R2        	(*(volatile unsigned long *)(DAC_BASE + 0x14)) // DAC2 data holding register for right aligned 12-bit mode. Offset = 0x14
#define DAC_DOR1           	(*(volatile unsigned long *)(DAC_BASE + 0x2C)) // DAC channel1 data output register. Read-only. Offset = 0x2C
#define DAC_DOR2           	(*(volatile unsigned long *)(DAC_BASE + 0x30)) // DAC channel2 data output register. Read-only. Offset = 0x30

