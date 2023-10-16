CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

all: libdynamic operations clean

pkg: main.h
	./get_files.sh
	cp main.h pkg/

libdynamic: pkg
	$(CC) $(CFLAGS) -c ./pkg/*.c
	$(CC) $(CFLAGS) -fPIC -shared -o libdynamic.so ./*.o

operations: ops.c
	$(CC) $(CFLAGS) -c ops.c
	$(CC) ops.o $(CFLAGS) -fPIC -shared -o 100-operations.so

clean:
	rm -rf *.o ./pkg
