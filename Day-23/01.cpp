#include <iostream>
#include <string>
#include <vector>

using namespace std;

char firstNonRepeating(string s) {
    vector<int> count(256, 0);
    for (char c : s) {
        count[c]++;
    }
    for (char c : s) {
        if (count[c] == 1) {
            return c;
        }
    }
    return '\0';
}

int main() {
    string s = "swiss";
    char res = firstNonRepeating(s);
    if (res != '\0') cout << res << endl;
    else cout << "None" << endl;
    return 0;
}