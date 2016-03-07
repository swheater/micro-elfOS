/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

MEMORY
{
	flash (rx)  : ORIGIN = 0x00000000, LENGTH = 512K
	ram   (rwx) : ORIGIN = 0x20000000, LENGTH = 96K
}

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
	.data :
	{
		* (.data);
	} > ram
	.bss :
	{
		* (.bss);
	} > ram
}
