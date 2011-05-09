#SGBDIR = ~/sgb/data
#DATADIR = $(SGBDIR)/data
#INCLUDEDIR = $(SGBDIR)/include
#LIBDIR = $(SGBDIR)/lib
#BINDIR = $(SGBDIR)/bin
#CWEBINPUTS = $(SGBDIR)/cweb
#
DATADIR = .
INCLUDEDIR = .
LIBDIR = .
BINDIR = .
CWEBINPUTS = .

SYS = -DSYSV
CFLAGS = -g -I$(INCLUDEDIR) $(SYS)
########## You shouldn't have to change anything after this point ##########
LDFLAGS = -L. -L$(LIBDIR)
LDLIBS = -lgb
LOADLIBES = $(LDLIBS)

.SUFFIXES: .dvi .tex .w

.tex.dvi:
	tex $*.tex

.w.c:
	if test -r $*.ch; then ctangle $*.w $*.ch; else ctangle $*.w; fi

.w.tex:
	if test -r $*.ch; then cweave $*.w $*.ch; else cweave $*.w; fi

.w.o:
	make $*.c
	make $*.o

.w:
	make $*.c
	make $*

.w.dvi:
	make $*.tex
	make $*.dvi

DATAFILES = anna.dat david.dat econ.dat games.dat homer.dat huck.dat \
        jean.dat lisa.dat miles.dat roget.dat words.dat plwords.dat
KERNELFILES = gb_flip.w gb_graph.w gb_io.w gb_sort.w
GENERATORFILES = gb_basic.w gb_books.w gb_econ.w gb_games.w gb_gates.w \
        gb_lisa.w gb_miles.w gb_plane.w gb_raman.w gb_rand.w gb_roget.w \
        gb_words.w gb_plwords.w
DEMOFILES = assign_lisa.w book_components.w econ_order.w football.w \
        girth.w ladders.w miles_span.w multiply.w queen.w roget_components.w \
        take_risc.w word_components.w polish_ladders.w 
MISCWEBS = boilerplate.w gb_dijk.w gb_save.w gb_types.w test_sample.w
CHANGEFILES = queen_wrap.ch word_giant.ch
MISCFILES = Makefile README abstract.plaintex cities.texmap blank.w \
        sample.correct test.correct test.dat +The+Stanford+GraphBase+
ALL = $(DATAFILES) $(KERNELFILES) $(GENERATORFILES) $(DEMOFILES) \
        $(MISCWEBS) $(CHANGEFILES) $(MISCFILES)

OBJS = $(KERNELFILES:.w=.o) $(GENERATORFILES:.w=.o) gb_dijk.o gb_save.o
HEADERS = $(OBJS:.o=.h)
DEMOS = $(DEMOFILES:.w=)

help:
	@ echo "First 'make tests';"
	@ echo "then (optionally) become superuser;"
	@ echo "then 'make install';"
	@ echo "then (optionally) 'make installdemos';"
	@ echo "then (optionally) 'make clean'."

lib: libgb.a

libgb.a: $(OBJS)
	rm -f certified
	ar rcv libgb.a $(OBJS)
	- ranlib libgb.a

gb_io.o: gb_io.c
	$(CC) $(CFLAGS) -DDATA_DIRECTORY=\"$(DATADIR)/\" -c gb_io.c

test_io: gb_io.o
	$(CC) $(CFLAGS) test_io.c gb_io.o -o test_io

test_graph: gb_graph.o
	$(CC) $(CFLAGS) test_graph.c gb_graph.o -o test_graph

test_flip: gb_flip.o
	$(CC) $(CFLAGS) test_flip.c gb_flip.o -o test_flip

tests: test_io test_graph test_flip
	./test_io
	./test_graph
	./test_flip
	make gb_sort.o
	make lib
	make test_sample
	- ./test_sample > sample.out
	diff test.gb test.correct
	diff sample.out sample.correct
	rm test.gb sample.out test_io test_graph test_flip test_sample
	echo "Congratulations --- the tests have all been passed."
	touch certified

install: lib
	if test ! -r certified; then echo "Please run 'make tests' first!"; fi
	test -r certified
	make installdata
	- mkdir $(LIBDIR)
	- cp libgb.a $(LIBDIR)
	- mkdir $(CWEBINPUTS)
	- cp -p boilerplate.w gb_types.w $(CWEBINPUTS)
	- mkdir $(INCLUDEDIR)
	- cp -p $(HEADERS) Makefile $(INCLUDEDIR)

installdata: $(DATAFILES)
	- mkdir $(SGBDIR)
	- mkdir $(DATADIR)
	- cp -p $(DATAFILES) $(DATADIR)

installdemos: lib $(DEMOS)
	- mkdir $(BINDIR)
	- mv $(DEMOS) $(BINDIR)

uninstalldemos:
	- cd $(BINDIR); rm -f $(DEMOS)

doc:
	tex abstract.plaintex

clean:
	rm -f *~ *.o *.c *.h libgb.a certified \
	         *.tex *.log *.dvi *.toc *.idx *.scn core

veryclean: clean
	rm -f $(DEMOS)

sgb.tar: $(ALL)
	tar cvf sgb.tar $(ALL)

floppy: $(ALL)
	bar cvf /dev/rfd0 $(ALL)
	bar tvf /dev/rfd0
	eject

fullfloppy: $(ALL) ERRATA ANSI AMIGA PROTOTYPES MSVC
	bar cvf /dev/rfd0 $(ALL) ERRATA ANSI AMIGA PROTOTYPES MSVC
	bar tvf /dev/rfd0
	eject

fulltar: $(ALL) ERRATA ANSI AMIGA PROTOTYPES MSVC
	tar cvf sgb.tar $(ALL) ERRATA ANSI AMIGA PROTOTYPES MSVC

polishladders:
	make tests
	make install
	make installdemos
	cc -g -I. -DSYSV -L. polish_ladders.c gb_plwords.o -lgb -o polish_ladders
