CFLAGS = -Wall

clean	:
	rm -f *.o *.*~ *~ main wynik*

test1	:
	./main < test1 > wynik1

main	: main.c libp.c
	cc main.c libp.c -o main
