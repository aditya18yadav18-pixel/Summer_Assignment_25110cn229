#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "radar";
    int n = s.length();

    for(int i = 0; i < n; i++)
    {
    
        bool already_counted = false;
        for(int k = 0; k < i; k++) {
            if(s[i] == s[k]) {
                already_counted = true;
                break;
            }
        }
        if(already_counted) {
            continue;
        }

        int count = 1; 
        for(int j = i + 1; j < n; j++)
        {
            if(s[i] == s[j])
            {
                count++;
            }
        }
        cout << s[i] << " : " << count << endl;
    }

    return 0;
}