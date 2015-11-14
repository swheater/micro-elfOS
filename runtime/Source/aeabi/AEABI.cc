/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

void *__dso_handle = 0;

extern "C" int __aeabi_atexit(void* object, void (*destroyer)(void*), void* dso_handle)
{
	return 0;
}
