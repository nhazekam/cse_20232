GPP=g++
PPFLAGS = -std=c++0x -Wall -Werror -g

all: main

main : main.cpp  complex.o
	$(GPP) $(PPFLAGS) -o $@ $^

%.o : %.cpp %.hpp
	$(GPP) $(PPFLAGS) -c -o $@ $<

clean :
	rm main *.o

