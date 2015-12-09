#ifndef __MELFOS_WDT_IMPL_H__
#define __MELFOS_WDT_IMPL_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/WDT.h>

class WDTImpl: public WDT
{
public:
    WDTImpl(void);
    ~WDTImpl(void);

    void begin(void);
};

#endif
