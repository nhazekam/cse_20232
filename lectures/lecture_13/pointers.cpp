//
//  pointers
//
//  Created by Jesus Izaguirre on 10/12/15.
//  Copyright © 2015 Jesus Izaguirre. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int num = 101, prime = 17, even = 4;
    double pi = M_PI;
    string s = "Hello";
    string& alter = s; // alter is an alias for s
    
    int* address_num = &num;
    int* address_prime = &prime;
    int *address_even = &even; // either int* val or int *val are OK
    double* address_pi = &pi;
    string* address_s = &s;
    
    // print values
    cout << "Value of num, prime, even, pi, c: " << num << " " << prime << " " << even
         << " " << pi << " " << s << endl;
    // print pointers, i.e., memory addresses
    cout << "Address of num is:\t " << address_num << endl;
    cout << "Address of prime is: " << address_prime << endl;
    cout << "Address of even is:\t " << address_even << endl;
    cout << "Address of pi is:\t " << address_pi << endl;
    cout << "Address of c is:\t " << address_s << endl;
    cout << "Address of c is:\t " << &alter << endl;
    // print values through indirection, i.e. dereferenced pointers
    cout << "The value of s is:\t " << *address_s << endl;
    cout << "The value of pi is:\t " << *address_pi << endl;
    // print sizeof variables in bytes
    cout << "The size of num, pi, and s is: " << sizeof(num) << " " << sizeof(pi) << " " << sizeof(s) << endl;
    
    s = "World";
    cout << "The value of alter is:\t " << alter << endl;

    return 0;
}



