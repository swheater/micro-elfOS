#
# Copyright (c) 2015-2018, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export C++C         = arm-none-eabi-gcc
export C++CFLAGS    = -Wall -O -Wextra -ffreestanding -fno-rtti -fno-exceptions -O -mcpu=cortex-m0plus -mthumb -IHeader
export CC           = arm-none-eabi-gcc
export CCFLAGS      = -Wall -O -mcpu=cortex-m0+ -mthumb -IHeader
export AS           = arm-none-eabi-as
export ASFLAGS      = -mthumb
export LD           = arm-none-eabi-ld
export LDFLAGS      =
export OBJCOPY      = arm-none-eabi-objcopy
export OBJCOPYFLAGS =
export SIZE         = arm-none-eabi-size
export SIZEFLAGS    =
