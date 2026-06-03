#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the range :";
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        bool isprime=true;

        for(int j=2;j<i;j++)
        {
            if(i%j==0)

            {
                isprime=false;
                break;
            }
        }
        if(isprime)

        {
            cout<<i<<" ";
        }
    }
}
