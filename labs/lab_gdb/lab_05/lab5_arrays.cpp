//
//  lab5_arrays.cpp
//
//  Nick Hazkeamp on 9/16/16.
//

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

// Sort Ascending
int minimum(int tosort[], int lower, int upper);
void sortAscending(int tosort[], int size);

// Sort Descending
int maximum(int tosort[], int lower, int upper);
void sortDescending(int tosort[], int size);

// Sort Tools
void swap(int & a, int &b);
void printArray(int tosort[], int size_of_array);

int main(int argc, const char * argv[]) {

	//int tosort[] = { 2, 3, 1 };
	//int size = 3;    
	int tosort[] = { 9, 37, 14, 82, 111, 56, 29, 2 };
	int size = 8;

	sortAscending(tosort, size);
	printArray(tosort, size);

	sortDescending(tosort, size);
	printArray(tosort, size);

    return 0;
}

void printArray(int tosort[], int size_of_array){
	for(int i = 0; i < size_of_array; i++){
		cout << tosort[i] << " ";
	}
	cout << endl;
}

void swap(int & a, int &b){
	int tmp  = b;
	b = a;
	a = tmp;
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



void sortAscending(int tosort[], int size){
	for (int i = 0; i < size; i++) {
		int min = minimum(tosort, i, size);
		swap(tosort[i], tosort[min]);
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



void sortDescending(int tosort[], int size){
	for (int i = 0; i < size; i++) {
		int max = maximum(tosort, i, size);
		swap(tosort[i], tosort[max]);
	}
}




