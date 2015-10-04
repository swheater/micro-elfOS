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

	DIO();
    ~DIO();

    Direction getDirection();
    void      setDirection(Direction direction);

    Level getLevel();
    void  setLevel(Level level);
};

#endif
