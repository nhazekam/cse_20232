
GPP=g++
PFLAGS= -std=c++0x -Wall -g

all :  hw5_1 lab7_complete

%.o : %.cpp %.h
	$(GPP) $(PFLAGS) -c -o $@ $<


lab7_complete : lab7_complete.cpp
	$(GPP) $(PFLAGS) -o $@ $^

hw5_1 : hw5_1.cpp read_matrix.o matrices.o
	$(GPP) $(PFLAGS) -o $@ $^
	

clean :
	rm hw5_1 lab7_complete *.o

