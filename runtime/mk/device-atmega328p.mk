#
# Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export C++C         = avr-gcc
export C++CFLAGS    = -Wall -O -Wextra -ffreestanding -fno-rtti -fno-exceptions -O -mmcu=atmega328p -IHeader
export CC           = avr-gcc
export CCFLAGS      = -Wall -O -mmcu=atmega328p -IHeader
export AS           = avr-as
export ASFLAGS      = 
export LD           = avr-ld
export LDFLAGS      =
export OBJCOPY      = avr-objcopy
export OBJCOPYFLAGS =
export SIZE         = avr-size
export SIZEFLAGS    =
