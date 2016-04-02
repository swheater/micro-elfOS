/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

	.org	0x0000

	.section .text

	RJMP	_start		/* Reset */
	RJMP	_dummy		/* INT0 */
	RJMP	_dummy		/* PCINT0 */
        RJMP    _dummy          /* TIMER1_COMPARE_A */
        RJMP    _dummy          /* TIMER1_OVERFLOW */
        RJMP    _dummy          /* TIMER0_OVERFLOW */
        RJMP    _dummy          /* EEPROM_READY */
        RJMP    _dummy          /* TIMER3_CAPTURE */
        RJMP    _dummy          /* TIMER3_COMPARE_A */
        RJMP    _dummy          /* TIMER3_COMPARE_B */
        RJMP    _dummy          /* TIMER3_COMPARE_D */
        RJMP    _dummy          /* TIMER3_OVERFLOW */
        RJMP    _dummy          /* WDT */

	.func
_start:
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
