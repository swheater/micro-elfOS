#ifndef __MEMORY_H__
#define __MEMORY_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

typedef unsigned char      Byte;
typedef unsigned short     Word16;
typedef unsigned int       Word32;
typedef unsigned long long Word64;

extern void setByte(volatile Byte* address, Byte value);
extern Byte getByte(volatile Byte* address);

extern void setWord16(volatile Word16* address, Word16 value);
extern Word16 getWord16(volatile Word16* address);

extern void setWord32(volatile Word32* address, Word32 value);
extern Word32 getWord32(volatile Word32* address);

extern void setWord64(volatile Word64* address, Word64 value);
extern Word64 getWord64(volatile Word64* address);

#endif
