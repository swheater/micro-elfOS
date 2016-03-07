#
# Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export C++C         = arm-none-eabi-gcc
export C++CFLAGS    = -Wall -Wextra -ffreestanding -fno-rtti -fno-exceptions -O -mcpu=cortex-m4 -mthumb -IHeader
export CC           = arm-none-eabi-gcc
export CCFLAGS      = -Wall -O -mcpu=cortex-m4 -mthumb -IHeader
export AS           = arm-none-eabi-as
export ASFLAGS      = -mthumb
export LD           = arm-none-eabi-ld
export LDFLAGS      =
export OBJCOPY      = arm-none-eabi-objcopy
export OBJCOPYFLAGS =
export SIZE         = arm-none-eabi-size
export SIZEFLAGS    =
