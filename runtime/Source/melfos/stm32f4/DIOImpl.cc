/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/DIO.h>
#include <melfos/stm32f4/DIOImpl.h>

#define GPIO_BASE_ADDR       ((Word32*) 0x40020000)
#define GPIO_PORT_SPACING    (0x100)

#define GPIO_MODE_PORT_OFFSET   (0x00)
#define GPIO_OTYPE_PORT_OFFSET  (0x01)
#define GPIO_OSPEED_PORT_OFFSET (0x02)
#define GPIO_PUPD_PORT_OFFSET   (0x03)
#define GPIO_ID_PORT_OFFSET     (0x04)
#define GPIO_OD_PORT_OFFSET     (0x05)
#define GPIO_BSR_PORT_OFFSET    (0x06)
#define GPIO_LCK_PORT_OFFSET    (0x07)
#define GPIO_AFL_PORT_OFFSET    (0x08)
#define GPIO_AFH_PORT_OFFSET    (0x09)

DIOImpl::DIOImpl(unsigned char portNumber, unsigned char pinNumber)
{
    _portNumber = portNumber;
    _pinNumber  = pinNumber;

    setDirection(DIO::INPUT);
}

DIOImpl::~DIOImpl(void)
{
}

DIO::Direction DIOImpl::getDirection(void)
{
    Word32* modeRegAddress = GPIO_MODE_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;
    Word32  currentModeReg = getWord32(modeRegAddress);
    Word32  mode           = (currentModeReg >> (2 * _pinNumber)) & 0x03;

    if (mode == 0b00)
        return DIO::INPUT;
    else if (mode == 0b01)
        return DIO::OUTPUT;
    else
        return DIO::ALTERNATE;
}

void DIOImpl::setDirection(DIO::Direction direction)
{
    Word32* modeRegAddress = GPIO_MODE_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;
    Word32  currentModeReg = getWord32(modeRegAddress);

    if (direction == DIO::INPUT)
        setWord32(modeRegAddress, (currentModeReg & ((~ 0x03) << (2 * _pinNumber))) | (0x00 << (2 * _pinNumber)));
    else if (direction == DIO::OUTPUT)
        setWord32(modeRegAddress, (currentModeReg & ((~ 0x03) << (2 * _pinNumber))) | (0x01 << (2 * _pinNumber)));
}

DIO::Level DIOImpl::getLevel(void)
{
    return DIO::HIGH;
}

void DIOImpl::setLevel(DIO::Level level)
{
    if (level == DIO::HIGH)
    {
        Word32* sorRegAddress = GPIO_BSR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

        setWord32(sorRegAddress, 1 << _pinNumber);
    }
    else
    {
        Word32* corRegAddress = GPIO_BSR_PORT_OFFSET + (_portNumber * GPIO_PORT_SPACING) + GPIO_BASE_ADDR;

        setWord32(corRegAddress, 1 << (_pinNumber + 16));
    }
}
