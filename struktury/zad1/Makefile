CFLAGS = -Wall

clean	:
	rm -f *.o *.*~ *~ main wynik*

test1	:
	./main < test1 > wynik1

main	: main.c lib.c lib.h
	cc main.c lib.c -o main
