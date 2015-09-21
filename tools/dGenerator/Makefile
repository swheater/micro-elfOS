#
# Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE         = make
export C++C         = g++
export C++CFLAGS    = -Wall -O -IHeader
export CC           = gcc
export CCFLAGS      = -Wall -O -IHeader
export LD           = g++
export LDFLAGS      = -Wall -O
export RM           = rm

OBJS = Source/dGenerator.o

all: dGenerator

.c.o:
	$(CC) $(CCFLAGS) -o $@ -c $<

.cc.o:
	$(C++C) $(C++CFLAGS) -o $@ -c $<

dGenerator: $(OBJS)
	$(C++C) $(LDFLAGS) -o $@ $(OBJS)

clean:
	$(MAKE) -C Header clean
	$(MAKE) -C Source clean
	$(RM) -f *~
