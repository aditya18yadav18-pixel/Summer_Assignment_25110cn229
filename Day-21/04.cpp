#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "gl bajaj";
    
    for(int i = 0; i < s.length(); i++) {
    
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; 
        }
    }
    
    cout << "Uppercase String: " << s << endl;
    return 0;
}