CFLAGS = -Wall

clean	:
	rm -f *.o *.*~ *~ main wynik*

testa	:
	./main < test1 > wynik1
testb	:
	./main < test2 > wynik2
testc	:
	./main < test3 > wynik3

main	: main.c libp.c
	cc main.c libp.c -o main
