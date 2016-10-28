//
//  hw5_4.cpp
//  hw5-4
//
// This program reads in a series of words or phrases and determines
// whether each is a palindrome or not.
//

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word);

int main() {
    string input;
    
    // Read in a word or phrase to evaluate
    cout << "Enter a word or phrase: ";
    getline(cin, input);
    
    while (input != "end") {
        // Determine whether or not the input is a palindrome
        if (isPalindrome(input)) {
            cout << "Palindrome";
        }
        else {
            cout << "Not a palindrome";
        }
        
        cout << endl;
            
        // Read in a word or phrase to evaluate
        cout << "Enter a word or phrase: ";
        getline(cin, input);
    }
    
    return 0;
}

bool isPalindrome(string word) {
    bool palindrome = true;
    
    // Start iterators at the front and back of the string
    // to check for symmetry
    string::iterator front = word.begin(),
                     back = word.end();
    
    back--; // Decrement the back iterator to be on the last character
    
    while (palindrome && front <= back) {
        // Skip over spaces so that we can evaluate phrases
        if (*front == ' ') {
            front++;
        }
        
        if (*back == ' ') {
            back--;
        }
        
        // If two opposing characters are not equal, not a palindrome
        if (*front != *back) {
            palindrome = false;
        }
        
        front++;
        back--;
    }
    
    return palindrome;
}