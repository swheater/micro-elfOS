@
@ Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
@

	.text

start:
	SETSP	=stack
	BL	setup
label:
	BL	loop
	B	label

	.ltorg

	.bss

	.align	4
	.space	4096
stack:

	.end
