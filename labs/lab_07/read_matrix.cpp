//
//  read_matrix.cpp
//  hw5-1
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "read_matrix.h"

using namespace std;

void readMatrix(vector<vector<double> > &a, vector<vector<double> > &b) {
    string line, val;
    ifstream mat_file;
    stringstream linestream;
    vector<double> row;
    
    vector<vector<vector<double> > > M(2);
    
    vector<string> filename;
    
    filename.push_back("matrix1.txt");
    filename.push_back("matrix2.txt");
    
    for (unsigned int i = 0; i < filename.size(); i++) {
        mat_file.open(filename.at(i).c_str(), std::ios_base::in);
        
        if (!mat_file.is_open()) {
            cout << "Error: Could not open " << filename.at(i) << endl;
            return;
        }
        
        while (mat_file >> line) {
            
            //cout << line << endl;
            
            linestream.str(line);
            
            while ( getline(linestream, val, ',') ) {
                //cout << val << endl;
                row.push_back( std::stod(val) );
            }
            
            M.at(i).push_back(row);
            row.clear();
            linestream.clear();
        }
        
        mat_file.close();
    }
    
    a = M.at(0);
    b = M.at(1);
}
