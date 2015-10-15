/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <App.h>
#include <Memory.h>
#include <melfos/mkx2x/WDTImpl.h>
#include <melfos/mkx2x/SIMImpl.h>
#include <melfos/mkx2x/DIOImpl.h>

void setup(void)
{
	WDTImpl::begin();
    SIMImpl::begin();
    DIOImpl::begin();
}

void loop(void)
{
    volatile int index;

    DIOImpl::setLevel(DIO::HIGH);
    for (index = 0; index < 200000; index++) ;

    DIOImpl::setLevel(DIO::LOW);
    for (index = 0; index < 200000; index++) ;

    DIOImpl::setLevel(DIO::HIGH);
    for (index = 0; index < 100000; index++) ;

    DIOImpl::setLevel(DIO::LOW);
    for (index = 0; index < 100000; index++) ;
}
