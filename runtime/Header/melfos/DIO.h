#ifndef __MELFOS_DIO_H__
#define __MELFOS_DIO_H__

/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

class DIO
{
public:
    enum Direction {INPUT, OUTPUT, ALTERNATE};
    enum Level     {LOW, HIGH, UNDRIVEN};

    DIO(void);
    virtual ~DIO(void);

    virtual Direction getDirection(void) = 0;
    virtual void      setDirection(Direction direction) = 0;

    virtual Level getLevel(void) = 0;
    virtual void  setLevel(Level level) = 0;
};

#endif
