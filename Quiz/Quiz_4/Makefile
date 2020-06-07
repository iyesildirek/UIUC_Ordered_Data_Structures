CC=g++
CPPFLAGS=-c -pedantic -Wall -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable

all: Quiz4

Quiz4: main.o 
	$(CC) -o  Quiz4 main.o
	$(CC) $(CPPFLAGS) main.cpp
	
main.o: main.cpp 
	$(CC) $(CPPFLAGS) main.cpp
	
testLog:
	@echo "Run test and log results"
	./Quiz4 > Quiz4.log

clean:
	rm -rf *o Quiz4 Quiz4.log
