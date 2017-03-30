CPPFLAGS= -c -g -Iinc -fpermissive

__START__: tablica
	./tablica

tablica: obj/main.o obj/tablica.o obj/stoper.o obj/zbior_danych.o
	g++ -o tablica obj/main.o obj/tablica.o obj/stoper.o obj/zbior_danych.o

obj/main.o: src/main.cpp inc/tablica.hh inc/zbior_danych.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ ${CPPFLAGS} -o obj/tablica.o src/tablica.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o	src/stoper.cpp

obj/zbior_danych.o: src/zbior_danych.cpp inc/zbior_danych.hh
	g++ ${CPPFLAGS} -o obj/zbior_danych.o src/zbior_danych.cpp

clean:
	rm -f obj/*.o tablica
