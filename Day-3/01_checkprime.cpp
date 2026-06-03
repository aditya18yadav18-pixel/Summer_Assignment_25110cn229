#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    bool isprime=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
    {
        cout<<"the number is prime";
    }
    else
    {
        cout<<"the number is not prime";
    }
}
