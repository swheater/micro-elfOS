#ifndef __MELFOS_DIO_IMPL_H__
#define __MELFOS_DIO_IMPL_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/DIO.h>

class DIOImpl
{
public:
    DIOImpl();
    ~DIOImpl();

    DIO::Direction getDirection();
    void           setDirection(DIO::Direction direction);

    DIO::Level getLevel();
    void       setLevel(DIO::Level level);
};

#endif
