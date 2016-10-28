//
//  hw5_3.cpp
//  hw5_3
//
//
// Test driver for the pqueue namespace defined in priority_pq.h

#include <iostream>

#include "priority_queue.h"

using namespace std;
using namespace pqueue;

int main() {
    vector<int> pq;
    int result = 0;
    
    push(pq, 10); // Add elements to the queue
    push(pq, 10);
    push(pq, 5);
    push(pq, 15);
    push(pq, 100);
    
    // Remove each element and print as they are removed
    while (result == 0) {
        cout << top(pq) << " ";
        result = pop(pq);
    }
    
    cout << endl;
    
    return 0;
}
