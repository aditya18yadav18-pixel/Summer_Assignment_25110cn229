#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string  s = "aditya";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(),s.end());
    cout<<s<<endl;

}