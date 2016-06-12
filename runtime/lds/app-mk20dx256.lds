/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

MEMORY
{
	flash (rx)  : ORIGIN = 0x00000000, LENGTH = 256K
	ram   (rwx) : ORIGIN = 0x1FFF8000, LENGTH = 64K
}

EXTERN(init_array_start)
EXTERN(init_array_end)

SECTIONS
{
	.text :
	{
		* (.text);
	} > flash
	.rodata :
	{
		* (.rodata);
	} > flash
	. = ALIGN(4);
	.init_array :
	{
		init_array_start = .;
		KEEP(* (.init_array));
		init_array_end = .;
	} > flash
	.data :
	{
		* (.data);
	} > ram
	.bss :
	{
		* (.bss);
	} > ram
}
