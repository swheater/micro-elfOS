/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

MEMORY
{
	flash (rx) : ORIGIN = 0x0000800, LENGTH = 62K
	ram (rwx) : ORIGIN = 0x1FFFF800, LENGTH = 8K
}

SECTIONS
{
	.text :
	{
		* (.text);
	} > flash
	.data :
	{
		* (.data);
	} > ram
	.rodata :
	{
		* (.rodata);
	} > ram
	.bss :
	{
		* (.bss);
	} > ram
}
