#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of terms;";
    cin>>n;
    int f1=0,f2=1;
    int f3;
    for(int i=3;i<=n;i++)
    {
         f3=f1+f2;
         f1=f2;
         f2=f3;
    }
    cout<<n<<"th fibonacci number is:"<<f3;
}