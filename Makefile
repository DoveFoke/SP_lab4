all: book

book: main.o book.o
	g++ main.o book.o -o book

main.o: main.cpp
	g++ -c main.cpp

book.o: book.cpp
	g++ -c book.cpp

clean: rm -rf *.o book