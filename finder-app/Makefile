# -*-MakeFile-*-

writer : writer.o
	gcc writer.o -o writer

writer.o : writer.c
	gcc -c writer.c -o writer.o

CROSS_COMPILE:
	aarch64-none-linux-gnu-gcc writer.c -o writer

clean :
	rm -f *.o writer
