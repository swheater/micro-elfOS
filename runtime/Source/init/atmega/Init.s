/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

	.org	0x0000

	.section .text

	RJMP	_start		/* Reset */
	RJMP	_dummy		/* INT0 */
	RJMP	_dummy		/* INT1 */
	RJMP	_dummy		/* INT2 */
	RJMP	_dummy		/* INT3 */
	RJMP	_dummy		/* RESERVED */
	RJMP	_dummy		/* RESERVED */
	RJMP	_dummy		/* INT6 */
	RJMP	_dummy		/* RESERVED */
	RJMP	_dummy		/* PCINT0 */
	RJMP	_dummy		/* USB_GENERAL */
	RJMP	_dummy		/* USB_ENDPOINT */
	RJMP	_dummy		/* WDT */
	RJMP	_dummy		/* RESERVED */
	RJMP	_dummy		/* RESERVED */
	RJMP	_dummy		/* RESERVED */
        RJMP    _dummy          /* TIMER1_CAPTURE */
        RJMP    _dummy          /* TIMER1_COMPARE_A */
        RJMP    _dummy          /* TIMER1_COMPARE_B */
        RJMP    _dummy          /* TIMER1_COMPARE_C */
        RJMP    _dummy          /* TIMER1_OVERFLOW */
        RJMP    _dummy          /* TIMER0_COMPARE_A */
        RJMP    _dummy          /* TIMER0_COMPARE_B */
        RJMP    _dummy          /* TIMER0_OVERFLOW */
        RJMP    _dummy          /* SPI_TRANSFER_COMPLETE */
        RJMP    _dummy          /* USART1_RX_COMPLETE */
        RJMP    _dummy          /* USART1_BUFFER_EMPTY */
        RJMP    _dummy          /* USART1_TX_COMPLETE */
        RJMP    _dummy          /* ANALOG_COMPLETE */
        RJMP    _dummy          /* EEPROM_READY */
        RJMP    _dummy          /* TIMER3_CAPTURE */
        RJMP    _dummy          /* TIMER3_COMPARE_A */
        RJMP    _dummy          /* TIMER3_COMPARE_B */
        RJMP    _dummy          /* TIMER3_COMPARE_D */
        RJMP    _dummy          /* TIMER3_OVERFLOW */
	RJMP	_dummy		/* TWO_WIRE_INTERFACE */
	RJMP	_dummy		/* STORE_PROGRAM_MEMORY_READY */
        RJMP    _dummy          /* TIMER4_CAPTURE */
        RJMP    _dummy          /* TIMER4_COMPARE_A */
        RJMP    _dummy          /* TIMER4_COMPARE_B */
        RJMP    _dummy          /* TIMER4_COMPARE_D */
        RJMP    _dummy          /* TIMER4_OVERFLOW */
        RJMP    _dummy          /* TIMER4_FAULT_PROTECTION */

	.equ	SPL_IOADDR,	0x3D
	.equ	SPH_IOADDR,	0x3E
	.equ	RAMEND,		0x0AFF

	.func
_start:
	LDI	R16, hi8(RAMEND)
	OUT	SPH_IOADDR, R16
	LDI	R16, lo8(RAMEND)
	OUT	SPL_IOADDR, R16
	RCALL	setup
_label:
	RCALL	loop
	RJMP	_label
	.endfunc

	.func
_dummy:
	RJMP	_dummy
	.endfunc

	.end
