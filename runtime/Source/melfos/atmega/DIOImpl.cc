/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/DIO.h>
#include <melfos/atmega/DIOImpl.h>

#define GPIO_BASE_ADDR    ((Byte*) 0x20)
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
	Byte* drRegAddress = GPIO_DDR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

	Byte currentDRReg = getByte(drRegAddress);

    if ((currentDRReg & (1 << _pinNumber)) != 0)
        return DIO::OUTPUT;
    else
        return DIO::INPUT;
}

void DIOImpl::setDirection(DIO::Direction direction)
{
	Byte* drRegAddress = GPIO_DDR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

	Byte currentDRReg = getByte(drRegAddress);
    if (direction == DIO::OUTPUT)
        setByte(drRegAddress, currentDRReg | (1 << _pinNumber));
    else
    	setByte(drRegAddress, currentDRReg & (~ (1 << _pinNumber)));
}

DIO::Level DIOImpl::getLevel(void)
{
    return DIO::HIGH;
}

void DIOImpl::setLevel(DIO::Level level)
{
	Byte* portRegAddress = GPIO_PORT_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

	Byte currentPortReg = getByte(portRegAddress);
    if (level == DIO::HIGH)
        setByte(portRegAddress, currentPortReg | (1 << _pinNumber));
    else
    	setByte(portRegAddress, currentPortReg & (~ (1 << _pinNumber)));
}
