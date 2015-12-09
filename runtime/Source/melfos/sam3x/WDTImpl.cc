/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/WDT.h>
#include <melfos/sam3x/WDTImpl.h>

#define WDT_MODE_REG_ADDR ((Word32*) 0x400E1A54)
#define WDT_STATE_MASK    (0xFFFF7FFF)
#define WDT_ENABLE_BIT    (0x00008000)
#define WDT_DISABLE_BIT   (0x00000000)

WDTImpl::WDTImpl(void)
{
    Word32 current = getWord32(WDT_MODE_REG_ADDR);
    setWord32(WDT_MODE_REG_ADDR, (current & WDT_STATE_MASK) | WDT_DISABLE_BIT);
}

WDTImpl::~WDTImpl(void)
{
}

void WDTImpl::begin(void)
{
    Word32 current = getWord32(WDT_MODE_REG_ADDR);
    setWord32(WDT_MODE_REG_ADDR, (current & WDT_STATE_MASK) | WDT_DISABLE_BIT);
}
