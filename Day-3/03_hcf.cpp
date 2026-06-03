#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter ist number:";
    cin>>a;
    int b;
    cout<<"enter second number :";
    cin>>b;
    int ans=1;

    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    cout << "hcf of " << a << " and "<< b << " is "<< ans;

}








