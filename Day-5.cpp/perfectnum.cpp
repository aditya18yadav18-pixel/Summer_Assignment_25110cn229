#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    int sum =0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

        if(sum==n)
        {
            cout<<n<<" is a perfect number";

        }
        else
        {
            cout<<n<<" is not a perfect number";
        }
    
        }
        

