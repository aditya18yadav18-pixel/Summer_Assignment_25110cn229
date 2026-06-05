#include <iostream>
using namespace std;
int main()
{
    int n,i,lastdigit,fact;
    int sum=0;
    cout<<"enter the number:";
    cin>>n;
    int adi = n;
    while(n>0)
    {
        lastdigit = n%10;
        fact = 1;
        for(i=1;i<=lastdigit;i++)
        {
            fact = fact*i;
        }
    
        sum = sum + fact;
        n=n/10;
    }
        if(sum==adi)
        {
            cout<<"the number is strong number";
        }
        else
        {
            cout<<"the number is not strong number";
        }

    }
    
    