/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/WDT.h>
#include <melfos/atmega/WDTImpl.h>

#define WDOG_STATUSCTRLHIGH ((Word16*) 0x40052000)
#define WDOG_STATUSCTRLLOW  ((Word16*) 0x40052002)
#define WDOG_UNLOCK         ((Word16*) 0x4005200E)

WDTImpl::WDTImpl(void)
{
    setWord16(WDOG_UNLOCK, 0xC520);
    setWord16(WDOG_UNLOCK, 0xD928);
    setWord16(WDOG_STATUSCTRLHIGH, 0x0010);
}

WDTImpl::~WDTImpl(void)
{
}

void WDTImpl::begin(void)
{
    setWord16(WDOG_UNLOCK, 0xC520);
    setWord16(WDOG_UNLOCK, 0xD928);
    setWord16(WDOG_STATUSCTRLHIGH, 0x0010);
}
