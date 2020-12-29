CC=gcc
CFLAGS=-march=native -O3 -flto -fno-fat-lto-objects -pipe

sigma: src/main.o
	$(CC) src/main.o -o bin/sigma $(CFLAGS)

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

clean:
	rm -f sigma
	rm src/*.o

install:
	mv bin/sigma /usr/local/bin

uninstall:
	rm -f /usr/local/bin/sigma

