//
//  main.cpp
//  arraysdynamic
//
//  Created by Jesus Izaguirre on 10/12/15.
//  Copyright © 2015 Jesus Izaguirre. All rights reserved.
//
#include <iostream>
#include <cstdlib>
using namespace std;

void printArray(int* begin, int size);
void addArrays(int* a1, int* a2, int* sum, int size);

int main(int argc, const char * argv[]) {
    int n;
    int * randoms1;
    int * randoms2;
    int * sum;
    cout << "How many random numbers do you want?" << endl;
    cin >> n;
    srand(time(NULL));
    // dynamic memory allocation of an array with n integers
    const int maxn = 17 * n + 1;
    randoms1 = new int[n];
    randoms2 = new int[n];
    sum = new int[n];
    
    for (int i=0; i<n; i++) {
        randoms1[i] = rand() % maxn;
        randoms2[i] = rand() % maxn;
    }
    
    addArrays(randoms1, randoms2, sum, n);
    printArray(randoms1,n);
    printArray(randoms2,n);
    printArray(sum,n);
    
    delete [] sum;
    delete [] randoms2;
    delete [] randoms1;
    return 0;
}

void printArray(int* begin, int size) {
    for (int i=0; i<size; i++)
        cout << *(begin+i) << " ";
    cout << endl;
}

void addArrays(int* a1, int* a2, int* sum, int size) {
    for (int i=0;i<size;i++)
        sum[i]=a1[i]+a2[i];
}
