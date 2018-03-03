/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/UART.h>
#include <melfos/atmega/UARTImpl.h>


UARTImpl::UARTImpl(unsigned char uartNumber)
{
    _uartNumber = uartNumber;
}

UARTImpl::~UARTImpl(void)
{
}

char UARTImpl::read(void)
{
    return 0;
}

void UARTImpl::write(char value)
{
}
