/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <Memory.h>
#include <melfos/UART.h>
#include <melfos/sam3x/UARTImpl.h>

#define GPIO_UART_PCR5 ((Word32*) 0x4004B014)

#define UART_BASE_ADDR       ((Word8*) 0x400FF000)
#define UART_PORT_SPACING    (0x10)

#define UART_OR_PORT_OFFSET  (0x00)
#define UART_SOR_PORT_OFFSET (0x01)
#define UART_COR_PORT_OFFSET (0x02)
#define UART_TOR_PORT_OFFSET (0x03)
#define UART_IR_PORT_OFFSET  (0x04)
#define UART_DR_PORT_OFFSET  (0x05)

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
