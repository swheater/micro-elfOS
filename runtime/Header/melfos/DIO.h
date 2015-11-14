#ifndef __MELFOS_DIO_H__
#define __MELFOS_DIO_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

class DIO
{
public:
    enum Direction {INPUT, OUTPUT};
    enum Level     {LOW, HIGH, UNDRIVEN};

    DIO(void);
    ~DIO(void);

    Direction getDirection(void);
    void      setDirection(Direction direction);

    Level getLevel(void);
    void  setLevel(Level level);
};

#endif
