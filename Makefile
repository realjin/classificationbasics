CC = gcc

lib:
	$(CC) -w -I../../adt -I../indexingbasics -c -fPIC termselection.c
	$(CC) -shared -o libclassification.so.1 termselection.o

clean:
	rm *.out *.o -f
