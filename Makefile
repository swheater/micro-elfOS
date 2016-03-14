#
# Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
#

export MAKE = make
export RM   = rm

all:
	$(MAKE) -C runtime all
	$(MAKE) -C tools all

clean:
	$(MAKE) -C runtime clean
	$(MAKE) -C tools clean
	$(RM) -f *~ *.elf *.hex *.map
