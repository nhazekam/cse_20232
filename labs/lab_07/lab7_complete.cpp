//
//  lab6.cpp
//
//  This program implements a database for parts recording the
//  part number and quantity of each part.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> row;
typedef vector<row> table;

void insertRecord(table & parts, int part_no, int quantity);
int queryPart(table & parts, int part_no);
int deleteRecord(table & parts, int part_no);
bool comparePartNumbers(const row & row_to_compare, const int & part_no);
void printTable(table & parts);

int main() {
    table parts;    // the database of parts
    int result;     // holds the result of query operations

    printTable(parts);
    
    // Insert parts into the table
    insertRecord(parts, 1001, 62);
    printTable(parts);

	parts[1][0] = 1001;
    
    insertRecord(parts, 949, 85);
    printTable(parts);
    
    insertRecord(parts, 1050, 33);
    printTable(parts);
    
    insertRecord(parts, 1001, 98);
    printTable(parts);
    
    // Query parts in the table
    cout << "Querying part number 1050" << endl;
    result = queryPart(parts, 1050);
    if (result > 0) {
        cout << "The quantity of part " << 1050 << " is " << result << endl << endl;
    }
    else {
        cout << "Part " << 1050 << " was not found" << endl << endl;
    }
    
    printTable(parts);
    
    cout << "Querying part number 1050" << endl;
    result = queryPart(parts, 777);
    if (result > 0) {
        cout << "The quantity of part " << 777 << " is " << result << endl << endl;
    }
    else {
        cout << "Part " << 777 << " was not found" << endl << endl;
    }
    
    printTable(parts);
    
    // Delete parts from the table
    result = deleteRecord(parts, 1050);
    
    if (result > 0) {
        cout << "Deleted part " << 1050 << endl << endl;
    }
    else {
        cout << "Part " << 1050 << " was not found" << endl << endl;
    }
    
    printTable(parts);
    
    result = deleteRecord(parts, 1001);
    
    if (result > 0) {
        cout << "Deleted part " << 1001 << endl << endl;
    }
    else {
        cout << "Part " << 1001 << " was not found" << endl << endl;
    }
    
    printTable(parts);

    result = deleteRecord(parts, 1001);
    
    if (result > 0) {
        cout << "Deleted part " << 1001 << endl << endl;
    }
    else {
        cout << "Part " << 1001 << " was not found" << endl << endl;
    }

    
    // Print out the final table
    printTable(parts);
    
    return 0;
}



// Insert a row into the table sorted by part number
void insertRecord(table & parts, int part_no, int quantity) {
    table::iterator insert_point;       // iterator to the insertion point
    row to_insert(2);                   // row to be inserted
    
    to_insert[0] = part_no;
    to_insert[1] = quantity;
    
    // Find the insertion point using lower_bound and comparing the part number
    insert_point = lower_bound(parts.begin(), parts.end(), part_no, comparePartNumbers);
    
    // If the part is already in the table, update the quantity
    if (insert_point != parts.end() && (*insert_point)[0] == part_no) {
        (*insert_point)[1] = quantity;
    }
    
    // Otherwise insert the part into the table in sorted order
    else {
        parts.insert(insert_point, to_insert);
    }
}



// Find a part in the table and return its quantity. Return -1 if the part
// is not in the table.
int queryPart(table & parts, int part_no) {
    table::iterator query_point;    // iterator holding the result of the query
    int result = -1;                // result of the query
    
    // Find the part using lower_bound
    query_point = lower_bound(parts.begin(), parts.end(), part_no, comparePartNumbers);
    //query_point = lower_bound(parts.begin(), parts.end(), part_no);
    //query_point = parts.find(parts.begin(), parts.end(), part_no);
 
    // Update the return value with the quantity if the part is in the database
    if (query_point != parts.end() && (*query_point)[0] == part_no) {
        result = (*query_point)[1];
    }
    
    // This will be a quantity if the part was found, otherwise -1
    return result;
}



// Delete a part from the table and return its part number. Return -1 if the part
// is not in the table.
int deleteRecord(table & parts, int part_no) {
    table::iterator delete_point;   // iterator to the row to delete
    int result = -1;                // result of the deletion
    
    // Find the part to delete using lower_bound
    delete_point = lower_bound(parts.begin(), parts.end(), part_no, comparePartNumbers);
    
    // If the requested part is in the table, remove it and set the result
    // to the part number
    if (delete_point != parts.end() && (*delete_point)[0] == part_no) {
        result = (*delete_point)[0];
        parts.erase(delete_point);
    }
    
    // This will be a part number if the part was found, otherwise -1
    return result;
}



// Compare a row of the table with the supplied part number. Return true
// if part_no is less than the row's part number, otherwise false.
bool comparePartNumbers(const row & row_to_compare, const int & part_no) {
    return part_no > row_to_compare[0];
}



// Print the table to the terminal
void printTable(table & parts) {
    table::iterator i;
    row::iterator j;
    
    cout << left << setw(10) << "Part No."
         << left << setw(10) << "Quantity"
         << endl;
    
    for (i = parts.begin(); i != parts.end(); i++) {
        
        
        for (j = (*i).begin(); j != (*i).end(); j++) {
            cout << left << setw(10) << *j;
        }
        
        cout << endl;
        
    }
    
    cout << endl;
    
}




