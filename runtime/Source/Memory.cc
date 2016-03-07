/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>

void setByte(volatile Byte* address, Byte value)
{
    *address = value;
}

Byte getByte(volatile Byte* address)
{
    return *address;
}

void setWord16(volatile Word16* address, Word16 value)
{
    *address = value;
}

Word16 getWord16(volatile Word16* address)
{
    return *address;
}

void setWord32(volatile Word32* address, Word32 value)
{
    *address = value;
}

Word32 getWord32(volatile Word32* address)
{
    return *address;
}

void setWord64(volatile Word64* address, Word64 value)
{
    *address = value;
}

Word64 getWord64(volatile Word64* address)
{
    return *address;
}
