//
//  matrices.h
//  hw5_1
//
//  This file contains typedefs and declarations for member functions
//  of namespace matrices.
//

#ifndef __hw5_1__matrices__
#define __hw5_1__matrices__

#include <iostream>
#include <vector>

using namespace std;

namespace matrices {
    typedef vector<double> mathvec;  // type aliases for long vector templates
    typedef vector<mathvec> mathmat;
    
    // Multiply two matrices and return the product and a flag specifying whether
    // or not the multiplication occurred
    int matmul(mathmat & a, mathmat & b, mathmat & result);
    
    // Print out the argument matrix
    void printMatrix(mathmat &M);
}

#endif /* defined(__hw5_1__matrices__) */
