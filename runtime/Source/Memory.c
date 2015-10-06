/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include "Memory.h"

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
