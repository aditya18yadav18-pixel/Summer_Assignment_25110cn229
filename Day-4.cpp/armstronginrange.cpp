#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"enter the starting range:";
    cin>>a;
    int b;
    cout<<"enter the ending range:";
    cin>>b;
    int lastdigit;
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        int digits=0;
        int sum=0;
        while(temp>0)
        {
            digits++;
            temp/=10;
        }
        temp=i;
        while(temp>0)
        {
            int lastdigit=temp%10;
            sum+=pow(lastdigit,digits);
            temp/=10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }

}
        