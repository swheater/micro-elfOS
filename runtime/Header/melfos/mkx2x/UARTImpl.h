#ifndef __MELFOS_UART_IMPL_H__
#define __MELFOS_UART_IMPL_H__

/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/UART.h>

class UARTImpl: public UART
{
public:
    UARTImpl(unsigned char uartNumber);
    ~UARTImpl(void);

    char read(void);
    void write(char value);
private:
    unsigned char _uartNumber;
};

#endif
