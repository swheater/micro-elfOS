@
@ Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
@

	.text

	.word	_stack		/* Initial Stack Pointer */
	.word	_start		/* Reset */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* Hard Fault */
	.word	_dummy		/* Memory Management Fault */
	.word	_dummy		/* Bus Fault */
	.word	_dummy		/* Usage Fault */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* RESERVED*/
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* SVCall */
	.word	_dummy		/* RESERVED for Debug */
	.word	_dummy		/* RESERVED */
	.word	_dummy		/* PendSV */
	.word	_dummy		/* SysTick */
	.word	_dummy		/* IRQ0 */
	.word	_dummy		/* IRQ1 */
	.word	_dummy		/* IRQ2 */
	.word	_dummy		/* IRQ3 */
	.word	_dummy		/* IRQ4 */
	.word	_dummy		/* IRQ5 */
	.word	_dummy		/* IRQ6 */
	.word	_dummy		/* IRQ7 */
	.word	_dummy		/* IRQ8 */
	.word	_dummy		/* IRQ9 */
	.word	_dummy		/* IRQ10 */
	.word	_dummy		/* IRQ11 */
	.word	_dummy		/* IRQ12 */
	.word	_dummy		/* IRQ13 */
	.word	_dummy		/* IRQ14 */
	.word	_dummy		/* IRQ15 */
	.word	_dummy		/* IRQ16 */
	.word	_dummy		/* IRQ17 */
	.word	_dummy		/* IRQ18 */
	.word	_dummy		/* IRQ19 */
	.word	_dummy		/* IRQ20 */
	.word	_dummy		/* IRQ21 */
	.word	_dummy		/* IRQ22 */
	.word	_dummy		/* IRQ23 */
	.word	_dummy		/* IRQ24 */
	.word	_dummy		/* IRQ25 */
	.word	_dummy		/* IRQ26 */
	.word	_dummy		/* IRQ27 */
	.word	_dummy		/* IRQ28 */
	.word	_dummy		/* IRQ29 */

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
