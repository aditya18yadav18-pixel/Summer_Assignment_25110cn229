#include<iostream>
using namespace std;
int main()
{
    int f1=0,f2=1;
    int n;
    cout<<"enter the number of terms;";
    cin>>n;
    cout<<f1<<" "<<f2<<" ";
    for(int i=3;i<=n;i++)
    {
       int f3=f1+f2;
       cout<<f3<<" ";
         f1=f2;
         f2=f3;
    }
}

    