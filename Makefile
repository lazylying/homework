main:main.o max.o min.o
	gcc main.o max.o min.o -o main
main.o:main.c
	gcc -c main.c
max.o:max.c
	gcc -c max.c
min.o:min.c
	gcc -c min.c
clean:
	rm main *.o
