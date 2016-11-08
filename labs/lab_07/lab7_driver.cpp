//
//  hw6_1.cpp
//  hw6_1
//
//  This file contains a main driver to test matrix 
//  operations using double ** arrays.
//

#include <iostream>

#include "matrices.h"

using namespace std;
using namespace matrices;

int main(int argc, const char * argv[]) {
    //Define two matrices
    int ** m1;
    int ** m2;
    
    // Test the create function
    create(m1, 3, 2);
    create(m2, 3, 4);
    
    m1[0][0] = 1;
    m1[0][1] = 2;
    m1[0][2] = 1;
    m1[0][3] = 2;
    m1[1][0] = 3;
    m1[1][1] = 4;
    m1[1][2] = 3;
    m1[1][3] = 4;
    m1[2][0] = 5;
    m1[2][1] = 6;
    m1[2][2] = 5;
    m1[2][3] = 6;
    
    m2[0][0] = 4;
    m2[0][1] = 2;
    m2[0][2] = 9;
    m2[0][3] = 1;
    m2[1][0] = 7;
    m2[1][1] = 0;
    m2[1][2] = 3;
    m2[1][3] = 2;
    m2[2][0] = 2;
    m2[2][1] = 6;
    m2[2][2] = 1;
    m2[2][3] = 5;
    
    // Print the original matrices
    cout << "First Matrix " << endl;
    cout << repr(m1,3,4);
    cout << endl << "Second Matrix " << endl;
    cout << repr(m2, 3, 4);
    
    //Multiply matrices
    cout << endl << "Added" << endl;
    int ** added = add(m1, 3, 4, m2, 3, 4);
	if(added)
		cout << repr(added,3,4);
    
    //Print matrix using repr
    cout << "First Matrix " << endl;
    cout << repr(m1,3,4);
    cout << endl << "Second Matrix " << endl;
    cout << repr(m2, 3, 4);
    
    // Test the deleteMatrix function
    
    deleteMatrix(m1, 3);
    deleteMatrix(m2, 3);
    deleteMatrix(added, 3);
    
    cout << endl << "Matrices Successfully Deleted" << endl;
    
    return 0;
}
