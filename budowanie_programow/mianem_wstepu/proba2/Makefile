CFLAGS = -Wall

full	: testowy test

testowy	: main.o wczytaj_macierz.o wyznacznik.o
	cc -o testowy main.o wczytaj_macierz.o wyznacznik.o

main.o	: main.c defzbiorowe.h

clean	:
	rm -f *.o testowy *~

test	:
	./testowy < test1 > wynik1
