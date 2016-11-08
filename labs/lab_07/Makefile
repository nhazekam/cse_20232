
GCC=g++
PFLAGS=-std=c++0x -Wall -Werror -g

all: lab7

lab7 : lab7_driver.cpp matrices.o
	${GCC} ${PFLAGS} -o $@ $^

%.o : %.cpp %.h
	${GCC} ${PFLAGS} -c -o $@ $<

clean:
	rm *.o lab7



