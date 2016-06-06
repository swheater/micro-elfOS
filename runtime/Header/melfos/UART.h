#ifndef __MELFOS_UART_H__
#define __MELFOS_UART_H__

/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

class UART
{
public:
    UART(void);
    virtual ~UART(void);

    virtual char read(void) = 0;
    virtual void write(char value) = 0;
};

#endif
