
all: library

Book.o: Book.cpp Book.h
	g++ -c Book.cpp

Film.o: Film.cpp Film.h
	g++ -c Film.cpp

Periodical.o: Periodical.cpp Periodical.h 
	g++ -c Periodical.cpp

Video.o: Video.cpp Video.h 
	g++ -c Video.cpp

Media.o: Media.cpp Media.h 
	g++ -c Media.cpp

SearchEngine.o:  SearchEngine.h SearchEngine.cpp Media.h Video.h Periodical.h Film.h Book.h
	g++ -c SearchEngine.cpp
	

library.o:  library.cpp Media.h Video.h Periodical.h Film.h Book.h
	g++ -c library.cpp

library: library.o SearchEngine.o Media.o Video.o Periodical.o Film.o Book.o
	g++ library.o SearchEngine.o Media.o Video.o Periodical.o Film.o Book.o -o library

clean: 
	rm -f library.o SearchEngine.o Media.o Video.o Periodical.o Film.o Book.o
