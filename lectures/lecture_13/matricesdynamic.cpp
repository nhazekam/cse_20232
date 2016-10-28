//
//  main.cpp
//  matvecdynamic
//
//  Created by Jesus Izaguirre on 10/12/15.
//  Copyright © 2015 Jesus Izaguirre. All rights reserved.
//

#include <iostream>
using namespace std;

void printMat(int **m, int dim1, int dim2) {
    for (int i=0; i<dim1; i++) {
        for (int j=0; j<dim2; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}

int main(int argc, const char * argv[]) {
    int **eye = new int*[3];
    for (int i=0;i<3;i++) {
        eye[i] = new int[3];
    }
    
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            if (i==j)
                eye[i][j]=1;
            else
                eye[i][j]=0;
    
    
    printMat(eye,3,3);
    return 0;
}















