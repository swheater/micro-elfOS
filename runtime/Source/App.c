/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include "Memory.h"

#define SIM_SCGC5       ((unsigned int*) 0x40048038)
#define GPIO_PORTC_PCR5 ((unsigned int*) 0x4004B014)
// #define GPIO_PORTC_OR   ((unsigned int*) 0x40040080)
// #define GPIO_PORTC_SOR  ((unsigned int*) 0x40040084)
// #define GPIO_PORTC_COR  ((unsigned int*) 0x40040088)
// #define GPIO_PORTC_TOR  ((unsigned int*) 0x4004008C)
// #define GPIO_PORTC_IR   ((unsigned int*) 0x40040090)
// #define GPIO_PORTC_DR   ((unsigned int*) 0x40040094)
#define GPIO_PORTC_OR   ((unsigned int*) 0xF8000080)
#define GPIO_PORTC_SOR  ((unsigned int*) 0xF8000084)
#define GPIO_PORTC_COR  ((unsigned int*) 0xF8000088)
#define GPIO_PORTC_TOR  ((unsigned int*) 0xF800008C)
#define GPIO_PORTC_IR   ((unsigned int*) 0xF8000090)
#define GPIO_PORTC_DR   ((unsigned int*) 0xF8000094)

void setup(void)
{
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
