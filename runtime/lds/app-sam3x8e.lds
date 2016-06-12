/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

MEMORY
{
	flash (rx)  : ORIGIN = 0x00000000, LENGTH = 512K
	ram   (rwx) : ORIGIN = 0x20000000, LENGTH = 96K
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
		* (.init_array);
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
