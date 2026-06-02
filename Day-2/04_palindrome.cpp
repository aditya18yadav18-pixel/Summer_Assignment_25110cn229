#include<iostream>
using namespace std;
int main()
{
int reverse=0;
int lastdigit;
int n;
cout<<"enter the number ;";
cin>>n;
int palindrome=n;
while(n>0)
{
    lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n=n/10;

}
if(palindrome==reverse)
{
    cout<<"the number is palindrome";
}
else
{
    cout<<"the number is not palindrome";
}

}