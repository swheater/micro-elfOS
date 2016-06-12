#ifndef __MELFOS_DIO_IMPL_H__
#define __MELFOS_DIO_IMPL_H__

/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <melfos/DIO.h>

class DIOImpl: public DIO
{
public:
    DIOImpl(unsigned char portNumber, unsigned char pinNumber);
    virtual ~DIOImpl(void);

    void begin(void);

    DIO::Direction getDirection(void);
    void           setDirection(DIO::Direction direction);

    DIO::Level getLevel(void);
    void       setLevel(DIO::Level level);
private:
    unsigned char _portNumber;
    unsigned char _pinNumber;
};

#endif
