/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

extern "C" void (init_array_start)(void);
extern "C" void (init_array_end)(void);

extern "C" void init(void);

extern "C" void __cxa_pure_virtual(void);

extern void operator delete(void* ptr);

extern void operator delete(void* ptr, unsigned int size);
