#
# Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE         = make
export C++C         = g++
export C++CFLAGS    = -Wall -O -IHeader
export CC           = gcc
export CCFLAGS      = -Wall -O -IHeader
export LD           = ld
export LDFLAGS      =
export OBJCOPY      = arm-none-eabi-objcopy
export OBJCOPYFLAGS =
export SIZE         = arm-none-eabi-size
export SIZEFLAGS    = 
export RM           = rm

OBJS = Source/Init.o \
       \
       Source/App.o \
       Source/Memory.o

all: app.hex

.c.o:
	$(CC) $(CCFLAGS) -o $@ -c $<

.cc.o:
	$(C++C) $(C++CFLAGS) -o $@ -c $<

dGen: $(OBJS)
	$(LD) $(LDFLAGS) -O $(OBJS)

clean:
	$(MAKE) -C Header clean
	$(MAKE) -C Source clean
	$(RM) -f *~
