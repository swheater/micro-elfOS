/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/D.h>
#include <melfos/DImpl.h>
#include <melfos/mkx2x/WDTImpl.h>
#include <melfos/mkx2x/SIMImpl.h>
#include <melfos/mkx2x/DIOImpl.h>

// DIOImpl dio(1, 5);  // Pro Trinket
// DIOImpl dio(1, 1);  // Trinket
// DIOImpl dio(2, 5);  // Teensy 3.X/LC
// DIOImpl dio(1, 27); // Arduino Due

DImpl::DImpl(void) : _ledPin(2, 5)
{
}

DImpl::~DImpl(void)
{
}

DIO& DImpl::ledPin(void)
{
    return _ledPin;
}
