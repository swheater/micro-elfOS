#
# Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE         = make
export C++C         = arm-none-eabi-gcc
# export C++CFLAGS    = -Wall -fno-rtti -fno-exceptions -O -mcpu=cortex-m0plus -mthumb -IHeader
export C++CFLAGS    = -Wall -fno-rtti -fno-exceptions -O -mcpu=cortex-m4 -mthumb -IHeader
export CC           = arm-none-eabi-gcc
# export CCFLAGS      = -Wall -O -mcpu=cortex-m0plus -mthumb -IHeader
export CCFLAGS      = -Wall -O -mcpu=cortex-m4 -mthumb -IHeader
export AS           = arm-none-eabi-as
export ASFLAGS      = -mthumb
export LD           = arm-none-eabi-ld
export LDFLAGS      =
export OBJCOPY      = arm-none-eabi-objcopy
export OBJCOPYFLAGS =
export SIZE         = arm-none-eabi-size
export SIZEFLAGS    = 
export RM           = rm

OBJS = Source/Init.o \
       \
       Source/App.o \
       Source/Memory.o \
       \
       Source/melfos/DIO.o

all: app.hex

.s.o:
	$(AS) $(ASFLAGS) -o $@ $<

.c.o:
	$(CC) $(CCFLAGS) -o $@ -c $<

.cc.o:
	$(C++C) $(C++CFLAGS) -o $@ -c $<

app.elf app.map: app-mk20dx256.lds $(OBJS)
	$(LD) $(LDFLAGS) -nostdlib -T app-mk20dx256.lds -o app.elf -Map app.map $(OBJS)
	$(SIZE) $(SIZEFLAGS) app.elf

app.hex: app.elf
	$(OBJCOPY) $(OBJCOPYFLAGS) -O ihex app.elf app.hex

clean:
	$(MAKE) -C Header clean
	$(MAKE) -C Source clean
	$(RM) -f *~ *.elf *.hex *.map
