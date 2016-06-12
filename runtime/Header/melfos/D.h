#ifndef __MELFOS_D_H__
#define __MELFOS_D_H__

/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/DIO.h>

class D
{
public:
    D(void);
    virtual ~D(void);

    virtual DIO& ledPin(void) = 0;

    static D& instance(void);
};

#endif
