/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <aeabi/AEABI.h>

void *__dso_handle;

int __aeabi_atexit(void* object, void (*destroyer)(void*), void* dso_handle)
{
    return 0;
}
