all: lsongs.o mlibrary.o songdriver.o
	gcc -o drive.out lsongs.o mlibrary.o songdriver.o

lsongs.o: lsongs.h lsongs.c
	gcc -c lsongs.c

mlibrary.o: lsongs.h mlibrary.h mlibrary.c
	gcc -c mlibrary.c 

songdriver.o: lsongs.h mlibrary.h songdriver.c
	gcc -c songdriver.c

run:
	./drive.out
	
clean:
	rm *.o

cleaner:
	rm *.out
