#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    bool visited[256] = {false};
    string result = "";
    
    for (char c : s) {
        if (!visited[c]) {
            visited[c] = true;
            result += c;
        }
    }
    return result;
}

int main() {
    string s = "geeksforgeeks";
    cout << "String after removing duplicates: " << removeDuplicates(s) << endl;
    return 0;
}