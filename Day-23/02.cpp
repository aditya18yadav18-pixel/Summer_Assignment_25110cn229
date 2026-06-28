#include <iostream>
#include <string>
#include <vector>

using namespace std;

char firstRepeating(string s) {
    vector<int> count(256, 0);
    for (char c : s) {
        count[c]++;
        if (count[c] > 1) {
            return c;
        }
    }
    return '\0';
}

int main() {
    string s = "geeksforgeeks";
    char res = firstRepeating(s);
    if (res != '\0') cout << res << endl;
    else cout << "None" << endl;
    return 0;
}