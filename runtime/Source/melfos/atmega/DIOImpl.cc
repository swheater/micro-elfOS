/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/DIO.h>
#include <melfos/atmega/DIOImpl.h>

#define GPIO_BASE_ADDR    ((Word8*) 0x20)
#define GPIO_PORT_SPACING (0x03)

#define GPIO_PIN_PORT_OFFSET  (0x00)
#define GPIO_DDR_PORT_OFFSET  (0x01)
#define GPIO_PORT_PORT_OFFSET (0x02)

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
    setDirection(DIO::INPUT);
}

DIO::Direction DIOImpl::getDirection(void)
{
    Word8* drRegAddress = GPIO_DDR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

    Word8 currentDRReg = getWord8(drRegAddress);

    if ((currentDRReg & (1 << _pinNumber)) != 0)
        return DIO::OUTPUT;
    else
        return DIO::INPUT;
}

void DIOImpl::setDirection(DIO::Direction direction)
{
    Word8* drRegAddress = GPIO_DDR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

    Word8 currentDRReg = getWord8(drRegAddress);
    if (direction == DIO::OUTPUT)
        setWord8(drRegAddress, currentDRReg | (1 << _pinNumber));
    else
    	setWord8(drRegAddress, currentDRReg & (~ (1 << _pinNumber)));
}

DIO::Level DIOImpl::getLevel(void)
{
    return DIO::HIGH;
}

void DIOImpl::setLevel(DIO::Level level)
{
    Word8* portRegAddress = GPIO_PORT_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

    Word8 currentPortReg = getWord8(portRegAddress);
    if (level == DIO::HIGH)
        setWord8(portRegAddress, currentPortReg | (1 << _pinNumber));
    else
    	setWord8(portRegAddress, currentPortReg & (~ (1 << _pinNumber)));
}
