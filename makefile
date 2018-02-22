CC=g++
CFLAGS=-I

make: temp.o
	./temp.exe

temp.o: YouTube_PlayList_Download.cpp
	$(CC) -Wall -g -c YouTube_PlayList_Download.cpp -o temp.o
	$(CC) -o temp.exe temp.o

clean:
	rm temp.*
