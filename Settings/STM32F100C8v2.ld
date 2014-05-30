/* Memory configuration for STM32F100C8 */

ENTRY(Reset_Handler)

MEMORY
{
  	SRAM (rwx) 	: ORIGIN = 0x20000000, LENGTH = 20K
  	STACK (rwx)	: ORIGIN = 0x20001FFC, LENGTH = 0K
  	FLASH (rx)  : ORIGIN = 0x00000000, LENGTH = 64K

}

SECTIONS {
	. = ORIGIN(FLASH);

	.vectors :
	{
		*(.isr_vector)			/* Vector table */
	} >FLASH

	.text :
	{
		*(.text)				/* Program code */
		*(.rodata)				/* Read only data */
		*(.rodata*)
	} >FLASH

	.data :
	{
		__data_start__ = .;
		*(.data)				/* Data memory */
		__data_end__ = .;
	} >SRAM AT >FLASH

    _start_data_flash = LOADADDR(.data);

	. = ALIGN(4);

	.bss :
	{
		__bss_start__ = .;
		*(.bss)				/* Zero-filled run time allocate data memory */
		__bss_end__ = .;
	} >SRAM

	. = ALIGN(4);

	__stack_start__ = .;
	__stack_end__ = ORIGIN(STACK);
}

__end__ = .;
PROVIDE(end = .);

