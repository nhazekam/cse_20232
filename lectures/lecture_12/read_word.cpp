//
//  read_word.cpp
//  hw5-5
//
//  Created by Jeff Kinnison on 10/1/15.
//  Copyright (c) 2015 Jeff Kinnison. All rights reserved.
//

#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "read_word.h"

using namespace std;

string getRandomWord() {
    string word;
    vector<string> words;
    ifstream wordlist;
    int random;
    
    wordlist.open("random_words.txt");
    
    while (!wordlist.eof()) {
        wordlist >> word;
        words.push_back(word);
    }
    
    srand(time(NULL));
    
    random = rand() % words.size();
    word = words.at(random);
    
    return word;
}