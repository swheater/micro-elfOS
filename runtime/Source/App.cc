/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <App.h>
#include <Memory.h>
#include <melfos/mkx2x/WDTImpl.h>
#include <melfos/mkx2x/SIMImpl.h>
#include <melfos/mkx2x/DIOImpl.h>

void setup(void)
{
//    WDTImpl wdt;
	SIMImpl sim;
	DIOImpl dio(2, 5);

//    wdt.begin();
	sim.begin();
	dio.begin();
	dio.setDirection(DIO::OUTPUT);
}

void loop(void)
{
	DIOImpl dio(2, 5);

	volatile int index;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 600000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 100000; index++) ;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 600000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 100000; index++) ;
}
