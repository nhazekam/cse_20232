//
//  hw5_1.cpp
//  hw5_1
//
// This program reads in two matrices from file, performs
// matrix multiplication on them, and prints the resulting
// matrix.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

#include "read_matrix.h"
#include "matrices.h"

using namespace std;
using namespace matrices;

int main() {
    mathmat a,      // one of the multilpicands
            b;      // the other multiplicand
    int right_size; // the integer result of matmul
    
    readMatrix(a, b); // read in Matrix A size i x j and B size j x k

	mathmat result(a.size(), mathvec(b[0].size(), 0));
    
/*    // Set up Matrix result size i x k
    for (unsigned int i = 0; i < a.size(); i++) {
        mathvec row(b[0].size(), 0);
        result.push_back(row);
    }
  */
  
    // Attempt to multiply the matrices
    right_size = matmul(a, b, result);
    
    // If the matrices could be multiplied, output the product.
    // Otherwise, inform the user.
    if (right_size == 0) {
        printMatrix(result);
    }
    else {
        cout << "Error: Input matrices have incompatible dimensions." << endl;
    }
    
    return 0;
}

