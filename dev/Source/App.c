/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include "Memory.h"

#define SIM_SCGC5       ((unsigned int*) 0x40048038)
#define GPIO_PORTC_PCR5 ((unsigned int*) 0x4004B014)
#define GPIO_PORTC_OR   ((unsigned int*) 0xF8000080)
#define GPIO_PORTC_SOR  ((unsigned int*) 0xF8000084)
#define GPIO_PORTC_COR  ((unsigned int*) 0xF8000088)
#define GPIO_PORTC_TOR  ((unsigned int*) 0xF800008C)
#define GPIO_PORTC_IR   ((unsigned int*) 0xF8000090)
#define GPIO_PORTC_DR   ((unsigned int*) 0xF8000094)

void setup(void)
{
    setWord(SIM_SCGC5, getWord(SIM_SCGC5) | (1 << 11));
    setWord(GPIO_PORTC_PCR5, 0b00000000000000000000000100000000);
    setWord(GPIO_PORTC_DR,   0b00000000000000000000000000100000);
}

void loop(void)
{
    volatile int index;

    setWord(GPIO_PORTC_SOR, 0b00000000000000000000000000100000);
    for (index = 0; index < 500000; index++) ;

    setWord(GPIO_PORTC_COR, 0b00000000000000000000000000100000);
    for (index = 0; index < 500000; index++) ;
}
