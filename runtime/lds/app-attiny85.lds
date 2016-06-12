/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

MEMORY
{
	flash (rx)  : ORIGIN = 0x0000, LENGTH = 8K
	ram   (rwx) : ORIGIN = 0x0060, LENGTH = 512
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
