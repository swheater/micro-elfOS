#ifndef __MELFOS_SIM_IMPL_H__
#define __MELFOS_SIM_IMPL_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/SIM.h>

class SIMImpl: public SIM
{
public:
    SIMImpl(void);
    ~SIMImpl(void);

    static void begin(void);
};

#endif
