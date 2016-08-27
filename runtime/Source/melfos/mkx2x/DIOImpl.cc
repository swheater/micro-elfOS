/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/DIO.h>
#include <melfos/mkx2x/DIOImpl.h>

#define GPIO_PORTC_PCR5 ((Word32*) 0x4004B014)

#define GPIO_BASE_ADDR       ((Word32*) 0x400FF000)
#define GPIO_PORT_SPACING    (0x10)

#define GPIO_OR_PORT_OFFSET  (0x00)
#define GPIO_SOR_PORT_OFFSET (0x01)
#define GPIO_COR_PORT_OFFSET (0x02)
#define GPIO_TOR_PORT_OFFSET (0x03)
#define GPIO_IR_PORT_OFFSET  (0x04)
#define GPIO_DR_PORT_OFFSET  (0x05)

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

void DIOImpl::begin(unsigned char portNumber, unsigned char pinNumber)
{
    _portNumber = portNumber;
    _pinNumber  = pinNumber;

    setWord32(GPIO_PORTC_PCR5, 0b00000000000000000000000100000000);
    setDirection(DIO::INPUT);
}

DIO::Direction DIOImpl::getDirection(void)
{
    Word32* drRegAddress = GPIO_DR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

    Word32 currentDRReg = getWord32(drRegAddress);

    if ((currentDRReg & (1 << _pinNumber)) != 0)
        return DIO::OUTPUT;
    else
        return DIO::INPUT;
}

void DIOImpl::setDirection(DIO::Direction direction)
{
    Word32* drRegAddress = GPIO_DR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

    Word32 currentDRReg = getWord32(drRegAddress);
    if (direction == DIO::OUTPUT)
        setWord32(drRegAddress, currentDRReg | (1 << _pinNumber));
    else
        setWord32(drRegAddress, currentDRReg & (~ (1 << _pinNumber)));
}

DIO::Level DIOImpl::getLevel(void)
{
    return DIO::HIGH;
}

void DIOImpl::setLevel(DIO::Level level)
{
    if (level == DIO::HIGH)
    {
        Word32* sorRegAddress = GPIO_SOR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

        setWord32(sorRegAddress, 1 << _pinNumber);
    }
    else
    {
        Word32* corRegAddress = GPIO_COR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

        setWord32(corRegAddress, 1 << _pinNumber);
    }
}
