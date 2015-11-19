all : principal

run : principal
	./principal
clean : 
	rm *.o

surface.o : surface.c pi.h
	gcc -c  surface.c

circonference.o : circonference.c pi.h
	gcc -c circonference.c

principal.o : circonference.h surface.h principal.c
	 gcc -c principal.c
