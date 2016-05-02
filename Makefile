#
# Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE      = make
export MAKEFLAGS =
export RM        = rm
export RMFLAGS   = -f

all:
	$(MAKE) $(MAKEFLAGE) -C runtime all
	$(MAKE) $(MAKEFLAGS) -C tools all

clean:
	$(MAKE) $(MAKEFLAGS) -C runtime clean
	$(MAKE) $(MAKEFLAGS) -C tools clean
	$(RM) $(RMFLAGS) *~ *.elf *.hex *.map
