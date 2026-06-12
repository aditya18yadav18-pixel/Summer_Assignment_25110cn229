#include<iostream>
using namespace std;
int palindrome(int n)
{
    int lastdigit;
    int reverse=0;
    int sum = n;
    while(n>0)
    {
        lastdigit = n%10;
        reverse = reverse*10+lastdigit;
        n=n/10;
    }
    if(sum==reverse)
    return true;
    else
     return false;
}
int main()
{
    int n;
    cout<<"enter the numb:";
    cin>>n;
    if(palindrome(n))
    cout<<"it is palindrome";
    else
    cout<<"not palindrome";
}
