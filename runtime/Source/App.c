/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include "Memory.h"

#define SIM_SCGC5           ((Word32*) 0x40048038)

#define GPIO_PORTC_PCR5     ((Word32*) 0x4004B014)
#define GPIO_PORTC_OR       ((Word32*) 0x400FF080)
#define GPIO_PORTC_SOR      ((Word32*) 0x400FF084)
#define GPIO_PORTC_COR      ((Word32*) 0x400FF088)
#define GPIO_PORTC_TOR      ((Word32*) 0x400FF08C)
#define GPIO_PORTC_IR       ((Word32*) 0x400FF090)
#define GPIO_PORTC_DR       ((Word32*) 0x400FF094)

#define WDOG_STATUSCTRLHIGH ((Word16*) 0x40052000)
#define WDOG_STATUSCTRLLOW  ((Word16*) 0x40052002)
#define WDOG_UNLOCK         ((Word16*) 0x4005200E)

void setup(void)
{
    setWord16(WDOG_UNLOCK, 0xC520);
    setWord16(WDOG_UNLOCK, 0xD928);
    setWord16(WDOG_STATUSCTRLHIGH, 0x0010);

    setWord32(SIM_SCGC5, getWord32(SIM_SCGC5) | (1 << 11));
    setWord32(GPIO_PORTC_PCR5, 0b00000000000000000000000100000000);
    setWord32(GPIO_PORTC_DR,   0b00000000000000000000000000100000);
}

void loop(void)
{
    volatile int index;

    setWord32(GPIO_PORTC_SOR, 0b00000000000000000000000000100000);
    for (index = 0; index < 500000; index++) ;

    setWord32(GPIO_PORTC_COR, 0b00000000000000000000000000100000);
    for (index = 0; index < 500000; index++) ;

    setWord32(GPIO_PORTC_SOR, 0b00000000000000000000000000100000);
    for (index = 0; index < 100000; index++) ;

    setWord32(GPIO_PORTC_COR, 0b00000000000000000000000000100000);
    for (index = 0; index < 100000; index++) ;
}
