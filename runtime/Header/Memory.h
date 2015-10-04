#ifndef __MEMORY_H__
#define __MEMORY_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

typedef unsigned char      Byte;
typedef unsigned short     Word16;
typedef unsigned int       Word32;
typedef unsigned long long Word64;

extern void setWord32(volatile Word32* address, Word32 value);
extern Word32 getWord32(volatile Word32* address);

#endif
