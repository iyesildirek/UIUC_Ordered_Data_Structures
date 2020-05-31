CC=g++
#CPPFLAGS=-c -Wall -Werror
CPPFLAGS=-c -pedantic -Wall -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable

all: Quiz3

Quiz3: main.o 
	$(CC) -o  Quiz3 main.o
	$(CC) $(CPPFLAGS) main.cpp
	
main.o: main.cpp 
	$(CC) $(CPPFLAGS) main.cpp
	
testLog:
	@echo "Run test and log results"
	./Quiz3 > Quiz3.log

clean:
	rm -rf *o Quiz3 Quiz3.log
