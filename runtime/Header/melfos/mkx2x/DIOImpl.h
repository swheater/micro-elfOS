#ifndef __MELFOS_DIO_IMPL_H__
#define __MELFOS_DIO_IMPL_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/DIO.h>

class DIOImpl
{
public:
    DIOImpl(void);
    ~DIOImpl(void);

    static void begin(void);

    DIO::Direction getDirection(void);
    void           setDirection(DIO::Direction direction);

    DIO::Level getLevel(void);
    static void setLevel(DIO::Level level);
};

#endif
