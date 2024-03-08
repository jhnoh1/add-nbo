#Makefile
all: add-nbo

add-nbo: main.o reverse.o
	g++ -o add-nbo main.o reverse.o

main.o: reverse.h main.cpp
	g++ -c -o main.o main.cpp

reverse.o: reverse.h reverse.cpp
	g++ -c -o reverse.o reverse.cpp

clean:
	rm -f add-nbo
	rm -f *.o

