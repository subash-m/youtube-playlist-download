CC=g++
CFLAGS=-I

temp.o: YouTube_PlayList_Download.cpp
	$(CC) -Wall -g -c YouTube_PlayList_Download.cpp -o temp.o
	$(CC) -o temp.exe temp.o
	./temp.exe

clean:
	rm temp.*
