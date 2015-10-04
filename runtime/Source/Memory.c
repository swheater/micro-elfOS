/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include "Memory.h"

void setWord32(volatile Word32* address, Word32 value)
{
    *address = value;
}

Word32 getWord32(volatile Word32* address)
{
    return *address;
}
