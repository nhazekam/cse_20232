//
//  hw5_2.cpp
//  hw5_2
//
// This program reads in a list of names from file and sorts the
// list into alphabetical order by last name, first name.


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include "read_names.h"

using namespace std;

typedef vector<string> name;
typedef vector<name> record;

bool sortFirstName(const name &a, const name &b);
bool sortLastName(const name &a, const name &b);
bool sortName(const name &a, const name &b);
void sortNames(record & names);
void printRecords(record & names);

int main() {
    record names;
    
    readNames(names); // Read in the list of names
    
    cout << "Unsorted:" << endl;
    printRecords(names);
    
    sortNames(names); // Sort the names
    
    cout << endl << "Sorted:" << endl;
    printRecords(names);
    
    return 0;
}



// Sort the table of names in alphabetical order
void sortNames(record & names) {
    stable_sort(names.begin(), names.end(), sortFirstName); // Sort the list of names by first name using stable_sort
    stable_sort(names.begin(), names.end(), sortLastName); // Sort the list of names by last name using stable_sort
    
}



// Compare two full names and return their order by first name
bool sortFirstName(const name &a, const name &b) {
    cout << "comparing " << a[1] << " vs " << b[1] << endl;
    if (a[1] < b[1]) { // Check the first names
        return true;
    }
    return false;
}



// Compare two full names and return their order by last name
bool sortLastName(const name &a, const name &b) {
    cout << "comparing " << a[0] << " vs " << b[0] << endl;
    if (a[0] < b[0]) { // Check the last names
        return true;
    }
    return false;
}



// Print the table of names to the console
void printRecords(record & names) {
    cout << "there are " << names.size() << " names" <<endl;
    for (unsigned int i=0;i<names.size();i++)
        cout << names[i][0] << "," << names[i][1] << endl;
}
