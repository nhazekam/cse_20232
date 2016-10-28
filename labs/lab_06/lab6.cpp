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

void insertRecord(table & parts, int part_no, int quantity){
	table::iterator insert_location;
	row to_insert(2);
	to_insert[0] = part_no;
	to_insert[1] = quantity;

	insert_location = lower_bound(parts.begin(), parts.end(), part_no, comparePartNumbers);

	if(insert_location != parts.end() &&
		 (*insert_location)[0] == part_no){
		(*insert_location)[1] = quantity;
	}
	else {
		parts.insert(insert_location, to_insert);
	}
}

int queryPart(table & parts, int part_no){
	table::iterator insert_location;

	insert_location = lower_bound(parts.begin(), parts.end(), part_no, comparePartNumbers);

	if(insert_location != parts.end() &&
		 (*insert_location)[0] == part_no){
		return (*insert_location)[1];
	}
	else {
		return -1;
	}

	//	return -1;
}

int deleteRecord(table & parts, int part_no){
	return -1;
}




bool comparePartNumbers(const row & row_to_compare, const int & part_no){
	return part_no > row_to_compare[0];
}


void printTable(table & parts){
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
