/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <c++rt/C++RT.h>

void init(void)
{
//    for (void (*init_func)(void) = &init_array_start; init_func < &init_array_end; init_func++)
//        (*init_func)();
}

void __cxa_pure_virtual(void)
{
    while (1);
}

void operator delete(void* ptr)
{
    while (1);
}
