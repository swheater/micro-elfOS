#
# Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE    = make
export RM      = rm
export RMFLAGS = -f

include config.mk

include mk/arch-$(ARCH).mk
include mk/family-$(FAMILY).mk
include mk/device-$(DEVICE).mk

OBJS = Source/init/$(FAMILY)/Init.o \
       \
       Source/App.o \
       Source/Memory.o \
       \
       Source/aeabi/AEABI.o \
       \
       Source/c++rt/C++RT.o \
       \
       Source/melfos/DIO.o \
       Source/melfos/SIM.o \
       Source/melfos/WDT.o \
       Source/melfos/UART.o \
       \
       Source/melfos/$(FAMILY)/DIOImpl.o \
       Source/melfos/$(FAMILY)/SIMImpl.o \
       Source/melfos/$(FAMILY)/WDTImpl.o \
       Source/melfos/$(FAMILY)/UARTImpl.o \
       \
       Source/melfos/D_$(FAMILY).o \
       Source/melfos/DImpl_$(FAMILY).o

all: app.hex app.bin

.s.o:
	$(AS) $(ASFLAGS) -o $@ $<

.c.o:
	$(CC) $(CCFLAGS) -o $@ -c $<

.cc.o:
	$(C++C) $(C++CFLAGS) -o $@ -c $<

app.elf app.map: lds/app-$(DEVICE).lds $(OBJS)
	$(LD) $(LDFLAGS) -nostdlib -T lds/app-$(DEVICE).lds -o app.elf -Map app.map $(OBJS)
	$(SIZE) $(SIZEFLAGS) app.elf

app.hex: app.elf
	$(OBJCOPY) $(OBJCOPYFLAGS) -O ihex app.elf app.hex

app.bin: app.elf
	$(OBJCOPY) $(OBJCOPYFLAGS) -O binary app.elf app.bin

clean:
	$(MAKE) -C mk clean
	$(MAKE) -C lds clean
	$(MAKE) -C Header clean
	$(MAKE) -C Source clean
	$(RM) $(RMFLAGS) *~ *.elf *.hex *.bin *.map
