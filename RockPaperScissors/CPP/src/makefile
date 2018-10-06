HDIR = ../headers
CC=g++
CFLAGS = -I$(HDIR)

ODIR=obj
LDIR=../lib

_DEPS = Player.h Human.h CPU.h Score.h Game.h
DEPS = $(patsubst %,$(HDIR)/%,$(_DEPS))

_OBJ = RockPaperScissors.o Player.o Human.o CPU.o Score.o Game.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

RockPaperScissors: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
