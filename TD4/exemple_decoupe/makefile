
all : ploum.o plim.o plam.o
	gcc ploum.o plim.o plam.o -o yolo

ploum.o : ploum.c plam.h plim.h
	gcc -c -Wall ploum.c

plam.o : plam.c
	gcc -c -Wall plam.c

plim.o : plim.c 
	gcc -c -Wall plim.c

