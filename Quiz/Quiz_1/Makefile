CC=g++
#CPPFLAGS=-c -Wall -Werror
CPPFLAGS=-c -pedantic -Wall -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable

all: Quiz1

Quiz1: main.o 
	$(CC) -o  Quiz1 main.o
	$(CC) $(CPPFLAGS) main.cpp
	
main.o: main.cpp 
	$(CC) $(CPPFLAGS) main.cpp
	
testLog:
	@echo "Run test and log results"
	./Quiz1 > quiz1.log

clean:
	rm -rf *o Quiz1 quiz1.log
