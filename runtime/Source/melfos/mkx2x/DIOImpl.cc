/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/DIO.h>
#include <melfos/mkx2x/DIOImpl.h>

#define GPIO_PORTC_PCR5 ((Word32*) 0x4004B014)
#define GPIO_PORTC_OR   ((Word32*) 0x400FF080)
#define GPIO_PORTC_SOR  ((Word32*) 0x400FF084)
#define GPIO_PORTC_COR  ((Word32*) 0x400FF088)
#define GPIO_PORTC_TOR  ((Word32*) 0x400FF08C)
#define GPIO_PORTC_IR   ((Word32*) 0x400FF090)
#define GPIO_PORTC_DR   ((Word32*) 0x400FF094)

DIOImpl::DIOImpl(void)
{
    setWord32(GPIO_PORTC_PCR5, 0b00000000000000000000000100000000);
    setWord32(GPIO_PORTC_DR,   0b00000000000000000000000000100000);
}

DIOImpl::~DIOImpl(void)
{
}

void DIOImpl::begin(void)
{
    setWord32(GPIO_PORTC_PCR5, 0b00000000000000000000000100000000);
    setWord32(GPIO_PORTC_DR,   0b00000000000000000000000000100000);
}

DIO::Direction DIOImpl::getDirection(void)
{
    return DIO::OUTPUT;
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
    if (level == DIO::HIGH)
        setWord32(GPIO_PORTC_SOR, 0b00000000000000000000000000100000);
    else
        setWord32(GPIO_PORTC_COR, 0b00000000000000000000000000100000);

}
