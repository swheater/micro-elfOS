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
    ~D(void);

    static D& instance(void);
private:
};

#endif
