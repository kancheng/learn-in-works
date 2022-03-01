CC = gcc
CFLAGS = -lm -Wall -g

all: hello_max hello_min

hello_max: hello_max.c foo.o bar.o
	$(CC) $(CFLAGS) hello_max.c foo.o bar.o -o hello_max
hello_min: hello_min.c foo.o bar.o
	$(CC) $(CFLAGS) hello_min.c foo.o bar.o -o hello_min
foo.o: foo.c
	$(CC) $(CFLAGS) -c foo.c

bar.o: bar.c
	$(CC) $(CFLAGS) -c bar.c

clean:
	rm *.o hello_max hello_min





