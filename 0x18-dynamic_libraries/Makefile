CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

all: libdynamic

obj: ./pkg
	$(CC) $(CFLAGS) -c ./pkg/*.c

libdynamic: obj
	$(CC) $(CFLAGS) -fPIC -shared -o libdynamic.so ./*.o

clean:
	rm -rf *.o
