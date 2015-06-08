#
# Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE         = make
export CC           = arm-none-eabi-gcc
export CCFLAGS      = -Wall -O -mcpu=cortex-m0plus -mthumb
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
       Source/App.o


all: app.hex

.s.o:
	$(AS) $(ASFLAGS) -o $@ $<

.c.o:
	$(CC) $(CCFLAGS) -o $@ -c $<

app.elf app.map: app.lds $(OBJS)
	$(LD) $(LDFLAGS) -nostdlib -T app.lds -o app.elf -Map app.map $(OBJS)
	$(SIZE) $(SIZEFLAGS) app.elf

app.hex: app.elf
	$(OBJCOPY) $(OBJCOPYFLAGS) -O ihex app.elf app.hex

clean:
	$(MAKE) -C Source clean
	$(RM) -f *~ *.elf *.hex *.map
