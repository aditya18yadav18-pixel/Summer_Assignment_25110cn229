
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "I love competitive coding"; 
    
    int n = s.length();
    

    if (n == 0) {
        cout << "Total words: 0" << endl;
        return 0;
    }

    int count = 0;


    for (int i = 0; i < n; i++) {

        if (s[i] == ' ') {
            count++;
        }
    }
    
    int total_words = count + 1;

    cout << "Total words: " << total_words << endl;

    return 0;
}
