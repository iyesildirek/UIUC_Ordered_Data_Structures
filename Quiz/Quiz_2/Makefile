CC=g++
#CPPFLAGS=-c -Wall -Werror
CPPFLAGS=-c -pedantic -Wall -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable

all: Quiz2

Quiz2: main.o 
	$(CC) -o  Quiz2 main.o
	$(CC) $(CPPFLAGS) main.cpp
	
main.o: main.cpp 
	$(CC) $(CPPFLAGS) main.cpp
	
testLog:
	@echo "Run test and log results"
	./Quiz2 > Quiz2.log

clean:
	rm -rf *o Quiz2 Quiz2.log
