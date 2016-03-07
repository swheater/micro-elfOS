/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/SIM.h>
#include <melfos/mkx2x/SIMImpl.h>

#define SIM_SCGC5 ((Word32*) 0x40048038)

SIMImpl::SIMImpl(void)
{
    setWord32(SIM_SCGC5, getWord32(SIM_SCGC5) | (1 << 11));
}

SIMImpl::~SIMImpl(void)
{
}

void SIMImpl::begin(void)
{
    setWord32(SIM_SCGC5, getWord32(SIM_SCGC5) | (1 << 11));
}
