//
//  matrices.cpp
//  hw5_1
//
//  This file contains function definitions for namespace matrices,
//  including a function to print a mtrix to cout and a function
//  to multiply two matrices.
//

#include "matrices.h"

using namespace std;

namespace matrices {
    
    // Multiply two matrices and return the product and a flag specifying whether
    // or not the multiplication occurred
    int matmul(mathmat & a, mathmat & b, mathmat & result) {
        unsigned int i,  // index for rows of a and result
            j,  // index for rows of a and columns of b
            k;  // index for columns of b and result
        
        // Only multiply if all of the dimensions match
//        if (a[0].size() == b.size() && a.size() == result.size() && b[0].size() == result[0].size()) {
        if (a[0].size() == b.size()) {
            // Iterate over the rows of a
            for (i = 0; i < a.size(); i++) {
                
                // Iterate over the columns of b
                for (k = 0; k < b.at(0).size(); k++) {
                    result[i][k] = 0.0;
                    
                    //Iterate over the columns of a and rows of b
                    for (j = 0; j < b.size(); j++) {
                        result[i][k] += a[i][j] * b[j][k]; // Each entry of result is the dot product of a[i] and b[j]
                    }
                    
                }
                
            }
            
            return 0;
        }
        
        // Otherwise set all elements of result to -1 and return -1
        else {
            for (i  = 0; i < result.size(); i++) {
                for (j = 0; j < result[0].size(); j++) {
                    result[i][j] = -1;
                }
            }
            
            return -1;
        }
    }

    // Print out the argument matrix
    void printMatrix(mathmat &M) {
        mathmat::iterator i; // iterator ove matrix rows
        mathvec::iterator j; // iterator over matrix columns
        
        // Print out every element of a row to a single line
        for (i = M.begin(); i != M.end(); i++) {
            for (j = (*i).begin(); j != (*i).end(); j++) {
                cout << *j << " ";
            }
            cout << endl;
        }
    }
}
