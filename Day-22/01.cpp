#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "radar";
    string temp=s;
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
    int count=s[i];
    s[i]=s[j];
    s[j]=count;
    i++;
    j--;
}
if(s==temp)
cout<<"it is palindrome";
else
cout<<"not palindrome";

    


}

    


