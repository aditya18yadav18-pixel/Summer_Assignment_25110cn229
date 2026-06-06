#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int lastdigit;
    int reverse=0;
    int x=0;
    int temp=0;
    while(n>0)
    {
        x=n%2;
        temp = x+temp*10;
        n=n/2;
    }

    while(temp>0)
    {
        lastdigit = temp%10;
        reverse = reverse*10 + lastdigit;
        temp = temp/10;
    }
    cout<<"The binary representation is: "<<reverse<<endl;
}



