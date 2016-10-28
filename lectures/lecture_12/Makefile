
GPP=g++
PFLAGS= -std=c++0x -Wall -g

all : hw5_1 hw5_2 

%.o : %.cpp %.h
	$(GPP) $(PFLAGS) -c -o $@ $<

hw5_1 : hw5_1.cpp read_matrix.o matrices.o
	$(GPP) $(PFLAGS) -o hw5_1 hw5_1.cpp read_matrix.o matrices.o

hw5_2 : hw5_2.cpp read_names.o
	$(GPP) $(PFLAGS) -o $@ $^


clean :
	rm hw5_[1-5] *.o

