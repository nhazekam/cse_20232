//
//  main.cpp
//  arraypointers
//
//  Created by Jesus Izaguirre on 10/12/15.
//  Copyright © 2015 Jesus Izaguirre. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int primes[] = {23, 29, 31, 37, 41, 43};
    int n = sizeof(primes)/sizeof(int); //total bytes of primes divided by size of element
    
    // use pointer iteration to dereference elements of primes
    for (int* ptr=primes; ptr<(primes+n); ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
    // use pointer arithmetic to dereference elements of primes
    for (int *ptr=primes, i=0; i<n; i++) {
        cout << *(ptr+i) << " ";
    }
    cout << endl;
    // iterate from last to first element
    for (int j=n-1; j>=0; j--) {
        cout << *(primes+j) << " ";
    }
    cout << endl;
    // iterate pointer in descending order
    for (int *ptr=primes+n-1;ptr!=primes-1;ptr--) {
        cout << *ptr << " ";
    }
    cout << endl;
    return 0;
}







