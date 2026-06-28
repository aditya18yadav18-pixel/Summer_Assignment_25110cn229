#include <iostream>
#include <string>
#include <vector>

using namespace std;

char maxOccurringChar(string s) {
    vector<int> count(256, 0);
    for (char c : s) {
        count[c]++;
    }
    
    char maxChar = s[0];
    int maxCount = 0;
    
    for (char c : s) {
        if (count[c] > maxCount) {
            maxCount = count[c];
            maxChar = c;
        }
    }
    return maxChar;
}

int main() {
    string s = "testsample";
    cout << maxOccurringChar(s) << endl;
    return 0;
}