/*
 * Copyright (c) 2015-2018, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <App.h>
#include <Memory.h>
#include <melfos/samc21/WDTImpl.h>
#include <melfos/samc21/SIMImpl.h>
#include <melfos/samc21/DIOImpl.h>

void setup(void)
{
    WDTImpl wdt;
    SIMImpl sim;
//    DIOImpl dio(1, 5); // Pro Trinket
    DIOImpl dio(0, 5); // Nucleo F411RE
//    DIOImpl dio(1, 1); // Trinket
//    DIOImpl dio(2, 5); // Teensy 3.X/LC
//    DIOImpl dio(1, 27); // Arduino Due

    wdt.begin();
    sim.begin();
    dio.setDirection(DIO::OUTPUT);
}

void loop(void)
{
//    DIOImpl dio(1, 5); // Pro Trinket
    DIOImpl dio(0, 5); // Nucleo F411RE
//    DIOImpl dio(1, 1); // Trinket
//    DIOImpl dio(2, 5); // Teensy 3.X/LC
//    DIOImpl dio(1, 27); // Arduino Due

    volatile long count;

    dio.setLevel(DIO::HIGH);
    for (count = 0; count < 1000000; count++) ;
    dio.setLevel(DIO::LOW);
    for (count = 0; count < 1000000; count++) ;
}
