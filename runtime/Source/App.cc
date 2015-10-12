/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <App.h>
#include <Memory.h>
#include <melfos/mkx2x/SIMImpl.h>
#include <melfos/mkx2x/DIOImpl.h>

void setup(void)
{
    SIMImpl simImpl;
}

void loop(void)
{
    DIOImpl dioImpl;

    dioImpl.setLevel(DIO::HIGH);
    for (int index = 0; index < 500000; index++) ;

    dioImpl.setLevel(DIO::LOW);
    for (int index = 0; index < 500000; index++) ;

    dioImpl.setLevel(DIO::HIGH);
    for (int index = 0; index < 100000; index++) ;

    dioImpl.setLevel(DIO::LOW);
    for (int index = 0; index < 100000; index++) ;
}
