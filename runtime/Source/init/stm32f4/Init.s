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
	.word	_dummy		/* IRQ30 */
	.word	_dummy		/* IRQ31 */
	.word	_dummy		/* IRQ32 */
	.word	_dummy		/* IRQ33 */
	.word	_dummy		/* IRQ34 */
	.word	_dummy		/* IRQ35 */
	.word	_dummy		/* IRQ36 */
	.word	_dummy		/* IRQ37 */
	.word	_dummy		/* IRQ38 */
	.word	_dummy		/* IRQ39 */
	.word	_dummy		/* IRQ40 */
	.word	_dummy		/* IRQ41 */
	.word	_dummy		/* IRQ42 */
	.word	_dummy		/* IRQ43 */
	.word	_dummy		/* IRQ44 */
	.word	_dummy		/* IRQ45 */
	.word	_dummy		/* IRQ46 */
	.word	_dummy		/* IRQ47 */
	.word	_dummy		/* IRQ48 */
	.word	_dummy		/* IRQ49 */
	.word	_dummy		/* IRQ50 */
	.word	_dummy		/* IRQ51 */
	.word	_dummy		/* IRQ52 */
	.word	_dummy		/* IRQ53 */
	.word	_dummy		/* IRQ54 */
	.word	_dummy		/* IRQ55 */
	.word	_dummy		/* IRQ56 */
	.word	_dummy		/* IRQ57 */
	.word	_dummy		/* IRQ58 */
	.word	_dummy		/* IRQ59 */
	.word	_dummy		/* IRQ60 */
	.word	_dummy		/* IRQ61 */
	.word	_dummy		/* IRQ62 */
	.word	_dummy		/* IRQ63 */

	.thumb_func
_start:
@	BL	init
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
