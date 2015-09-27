#ifndef __MELFOS_DIO_H__
#define __MELFOS_DIO_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

class DIO
{
public:
	enum Direction {INPUT, OUTPUT};
	enum Level     {LOW, HIGH};

	DIO();
    virtual ~DIO();

    virtual Direction getDirection() = 0;
    virtual void      setDirection(Direction direction) = 0;

    virtual Level getLevel() = 0;
    virtual void  setLevel(Level level) = 0;
};

#endif
