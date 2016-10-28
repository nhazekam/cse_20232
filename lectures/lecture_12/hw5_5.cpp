//
//  hw5_5.cpp
//  hw5_5
//
// This program picks a random word from a file and has
// has the user play hangman to guess the word
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <ctime>

#include "read_word.h"

using namespace std;

void playHangman(string word, unsigned int max_guesses);
char readLetter(vector<char> &guesses);
bool wasPreviouslyGuessed(vector<char> guesses, char guess);
void checkWordFor(string word, char guess, vector<bool> & correct);
bool isTrue(const bool & b);
void writeSecretWord(string word, vector<bool> correct);

int main() {
    string word;
    
    // Get a word to be guessed
    word = getRandomWord();
    
    // Play the hangman game
    playHangman(word, 15);
    
    return 0;
}



// Main driver for the hangman game
void playHangman(string word, unsigned int max_guesses) {
    vector<bool> correct(word.length());    // Whether of not the letter at position i has been guessed
    vector<char> guesses;                   // Records all previously guessed letters
    char guess;                             // Holds the current guess
    bool win = false;                       // Win flag
    
    // While you still have guesses and have not won
    while (guesses.size() < max_guesses && !win) {
        // Output the secret word reveled so far and the number of guesses
        writeSecretWord(word, correct);
        cout << "Remaining guesses: " << max_guesses - guesses.size() << endl;
        
        // Get a letter that has not already been guessed
        guess = readLetter(guesses);
        
        // Determine whether or not the letter is in the secret word
        checkWordFor(word, guess, correct);
        
        // Check to see if you won
        win = all_of(correct.begin(), correct.end(), isTrue);
    }
    
    // Output the correct message for win/loss
    if (win) {
        cout << "You win!" << endl;
    }
    else {
        cout << "Out of guesses! Too bad!" << endl;
        correct = vector<bool>(word.length(), true);
    }
    
    writeSecretWord(word, correct);
}



// Read in a letter from the user, this implementation records
// guesses and does not loet the user guess the same letter twice
char readLetter(vector<char> &guesses) {
    char guess = 0;
    
    // Read characters in until a letter that has not previously been guessed is read
    while (!guess) {
        cout << "Enter a letter to guess: ";
        cin >> guess;
        
        if (wasPreviouslyGuessed(guesses, guess)) {
            guess = 0;
        }
    }
    
    cout << endl;
    
    // Add the guess to the list of guessed letters
    guesses.push_back(guess);
    
    return guess;
}



// Check to see if the character was guessed previously
bool wasPreviouslyGuessed(vector<char> guesses, char guess) {
    bool member = true;
    
    vector<char>::iterator itr;
    
    itr = find(guesses.begin(), guesses.end(), guess);
    
    if (itr == guesses.end()) {
        member = false;
    }
    
    return member;
}



void checkWordFor(string word, char guess, vector<bool> &correct) {
    unsigned int i;
    
    // Change the boolean flag for each position corresponding to the guessed letter
    for (i = 0; i < word.length(); i++) {
        
        if (word[i] == guess){
            correct[i] = true;
        }
    }
    
}


// Comparator function for the all_of <algorithm> function
bool isTrue(const bool & b) {
    return (b == true);
}


// Output the secret word with * in place of hidden letters
void writeSecretWord(string word, vector<bool> correct) {
    string::iterator w_itr = word.begin();
    vector<bool>::iterator g_itr = correct.begin();
    
    cout << "The secret word is: ";
    
    while (w_itr != word.end()) {
        
        if (*g_itr) {
            cout << *w_itr;
        }
        else {
            cout << "*";
        }
        
        w_itr++;
        g_itr++;
    }
    
    cout << endl;
}
