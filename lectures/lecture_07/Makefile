
main : main.cpp euler.o verlet.o integrator.o
	g++ -o main main.cpp euler.o verlet.o integrator.o

%.o : %.cpp %.h
	g++ -c -o $@ $<
