
GPP=g++
PFLAGS= -std=c++0x -Wall -g

all : lab5_arrays lab5_vectors lab5 

%.o : %.cpp %.h
	$(GPP) $(PFLAGS) -c -o $@ $<

lab5% : lab5%.cpp
	$(GPP) $(PFLAGS) -o $@ $<


clean :
	rm hw5_[1-5] *.o

