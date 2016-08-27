#ifndef __MELFOS_DIMPL_H__
#define __MELFOS_DIMPL_H__

/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/D.h>
#include <melfos/mkx2x/DIOImpl.h>

class DImpl: public D
{
public:
    DImpl(void);
    virtual ~DImpl(void);

//    DIO& ledPin(void);

private:
//    DIOImpl _ledPin;
};

#endif
