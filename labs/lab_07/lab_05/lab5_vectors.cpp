//
//  lab5_arrays.cpp
//
//  Nick Hazkeamp on 9/16/16.
//

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

// Sort Ascending
int minimum(vector<int> &tosort, int lower, int upper);
void sortAscending(vector<int> &tosort);

// Sort Descending
int maximum(vector<int> &tosort, int lower, int upper);
void sortDescending(vector<int> &tosort);

// Sort Tools
void swap(int & a, int &b);
void printArray(vector<int> &tosort);

int main(int argc, const char * argv[]) {
    
	vector<int> tosort;
	tosort.push_back(9);
	tosort.push_back(37);
	tosort.push_back(14);
	tosort.push_back(82);
	tosort.push_back(111);
	tosort.push_back(56);
	tosort.push_back(29);
	tosort.push_back(2);

	sortAscending(tosort);
	printArray(tosort);

	sortDescending(tosort);
	printArray(tosort);

    return 0;
}


int minimum(vector<int> &tosort, int lower, int upper){
	int min = lower;
	for(int i = lower; i < upper; i++){
		if(tosort[min] > tosort[i]){
			min = i;
		}
	}
	return min;
}

void sortAscending(vector<int> &tosort){
	for(int i=0; i < tosort.size(); i++){
		int loc = minimum(tosort, i, tosort.size());
		swap(tosort[i], tosort[loc]);
	}
}

int maximum(vector<int> &tosort, int lower, int upper){
	int max = lower;
	for(int i = lower; i < upper; i++){
		if(tosort[max] < tosort[i]){
			max = i;
		}
	}
	return max;
}

void sortDescending(vector<int> &tosort){
	for(int i=0; i < tosort.size(); i++){
		int loc = maximum(tosort, i, tosort.size());
		swap(tosort[i], tosort[loc]);
	}
}

void swap(int & a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void printArray(vector<int> &tosort){
	for (int i = 0; i < tosort.size(); i++) {
		cout << tosort[i] << " ";
	}
	cout << endl;
}

