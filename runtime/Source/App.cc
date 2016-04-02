/*
 * Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <App.h>
#include <Memory.h>
#include <melfos/sam3x/WDTImpl.h>
#include <melfos/sam3x/SIMImpl.h>
#include <melfos/sam3x/DIOImpl.h>

void setup(void)
{
//    WDTImpl wdt;
    SIMImpl sim;
//    DIOImpl dio(1, 5); // Pro Trinket
    DIOImpl dio(1, 1); // Trinket
//    DIOImpl dio(2, 5); // Teensy 3.X/LC
//    DIOImpl dio(1, 27); // Arduino Due

//    wdt.begin();
    sim.begin();
    dio.begin();
    dio.setDirection(DIO::OUTPUT);
}

void loop(void)
{
//    DIOImpl dio(1, 5); // Pro Trinket
    DIOImpl dio(1, 1); // Trinket
//    DIOImpl dio(2, 5); // Teensy 3.X/LC
//    DIOImpl dio(1, 27); // Arduino Due

    volatile long index;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 10000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 60000; index++) ;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 10000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 60000; index++) ;

    dio.setLevel(DIO::HIGH);
    for (index = 0; index < 10000; index++) ;

    dio.setLevel(DIO::LOW);
    for (index = 0; index < 60000; index++) ;
}
