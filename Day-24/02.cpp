#include <iostream>
#include <string>
using namespace std;

string compressString(string s) {
    string compressed = "";
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        compressed += s[i] + to_string(count);
    }
    
    return compressed.length() < s.length() ? compressed : s;
}

int main() {
    string s = "aabcccccaaa";
    cout << "Compressed string: " << compressString(s) << endl;
    return 0;
}