#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    int x=0;
    int count=0;
    int sum=0;
    while(n>0)
    {
        x=n%2;
        if(x==1)
        {
            count++;
        }
        sum=sum+x*10;

        n=n/2;
    }
    
    cout<<"the binary count is:"<<count<<endl;
}


