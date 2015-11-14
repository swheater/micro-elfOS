/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <App.h>
#include <Memory.h>
#include <melfos/mkx2x/WDTImpl.h>
#include <melfos/mkx2x/SIMImpl.h>
#include <melfos/mkx2x/DIOImpl.h>

WDTImpl wdt;
SIMImpl sim;
DIOImpl dio(2, 5);

void setup(void)
{
	wdt.begin();
	sim.begin();
	dio.begin();

	dio.setDirection(DIO::OUTPUT);
}

void loop(void)
{
    volatile int index;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 200000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 100000; index++) ;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 400000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 100000; index++) ;
}
