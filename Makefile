lab3.o:lab3.cpp
	g++ -o lab3 lab3.cpp

Clock:Clock.o lab3b.o
	g++ -o Clock lab3b.o Clock.o
Colck.o:Clock.cpp Clock.h
	g++ -c Clock.cpp
lab3b.o:lab3b.cpp Clock.h
	g++ -c lab3b.cpp


