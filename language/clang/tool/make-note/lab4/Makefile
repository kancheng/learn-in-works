CC = gcc
CFLAGS = -lm -Wall -g

hello: hello.c foo.o bar.o
	$(CC) $(CFLAGS) hello.c foo.o bar.o -o hello

foo.o: foo.c
	$(CC) $(CFLAGS) -c foo.c

bar.o: bar.c
	$(CC) $(CFLAGS) -c bar.c

clean:
	rm *.o hello





