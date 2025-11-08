CC=gcc -g -O2
LD=gcc
CFLAGS=
LDFLAGS=
OEXT=.o
EEXT=
RM=rm -rf
.PHONY: all clean
all: mshapes

shape$(OEXT): shape.c
	$(CC) -c $<
circle$(OEXT): circle.c
	$(CC) -c $<
mshapes$(OEXT): mshapes.c
	$(CC) -c $<

mshapes: mshapes$(OEXT) shape$(OEXT) circle$(OEXT)
	$(LD) $^ -o $@
clean:
	$(RM) *.o mshapes

