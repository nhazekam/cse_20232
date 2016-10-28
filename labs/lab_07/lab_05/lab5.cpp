//
//  lab5.cpp
//  Orbit integrator
//
//  Nick Hazkeamp on 9/16/16.
//

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int minimum(int tosort[], int lower, int upper);
void sortAscending(int tosort[], unsigned int size);
int maximum(int tosort[], int lower, int upper);
void sortDescending(int tosort[], unsigned int size);
void swap(int & a, int &b);
void printArray(int tosort[], int size_of_array);

int main(int argc, const char * argv[]) {
    
	int tosort[] = { 3, 2, 1 }; 

	sortAscending(tosort, 3);
	printArray(tosort, 3);

	sortDescending(tosort, 3);
	printArray(tosort, 3);

    return 0;
}

int minimum(int tosort[], int lower, int upper){
	int min = lower;
	for(int i = lower; i < upper; i++){
		if(tosort[min] > tosort[i]){
			min = i;
		}
	}
	return min;
}

void sortAscending(int tosort[], unsigned int size){
	for(int i=0; i < size; i++){
		int loc = minimum(tosort, i, size);
		swap(tosort[i], tosort[loc]);
	}
}

int maximum(int tosort[], int lower, int upper){
	int max = lower;
	for(int i = lower; i < upper; i++){
		if(tosort[max] < tosort[i]){
			max = i;
		}
	}
	return max;
}

void sortDescending(int tosort[], unsigned int size){
	for(int i=0; i < size; i++){
		int loc = maximum(tosort, i, size);
		swap(tosort[i], tosort[loc]);
	}
}

void swap(int & a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void printArray(int tosort[], int size_of_array){
	for (int i = 0; i < size_of_array; i++) {
		cout << tosort[i] << " ";
	}
	cout << endl;
}
