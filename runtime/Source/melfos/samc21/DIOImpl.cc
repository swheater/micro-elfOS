/*
 * Copyright (c) 2015-2018, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/DIO.h>
#include <melfos/samc21/DIOImpl.h>

DIOImpl::DIOImpl(unsigned char portNumber, unsigned char pinNumber)
{
    _portNumber = portNumber;
    _pinNumber  = pinNumber;
}

DIOImpl::~DIOImpl(void)
{
}

void DIOImpl::begin(void)
{
}

DIO::Direction DIOImpl::getDirection(void)
{
    return DIO::INPUT;
}

void DIOImpl::setDirection(DIO::Direction direction)
{
}

DIO::Level DIOImpl::getLevel(void)
{
    return DIO::HIGH;
}

void DIOImpl::setLevel(DIO::Level level)
{
}
