@
@ Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
@

	.text

	.word	_stack		/* Initial Stack Pointer */
	.word	_start		/* Reset */
	.word	_dummy		/* NMI */
	.word	_dummy		/* Hard Fault */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED*/
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* SVCall */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* PendSV */
	.word	_dummy		/* SysTick */
	.word	_dummy		/* IRQ0 */
	.word	_dummy		/* IRQ1 */
	.word	_dummy		/* IRQ2 */
	.word	_dummy		/* IRQ3 */

	.thumb_func
_start:
	BL	setup
_label:
	BL	loop
	B	_label

	.thumb_func
_dummy:
	B	_dummy

	.ltorg

	.bss

	.align	4
	.space	4096
_stack:

	.end
