#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string findLongestWord(string sentence) {
    stringstream ss(sentence);
    string word, longestWord = "";
    
    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    return longestWord;
}

int main() {
    string sentence = "I love programming in CPlusPlus";
    cout << "Longest word: " << findLongestWord(sentence) << endl;
    return 0;
}