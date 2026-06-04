#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ;";
    cin>>n;
    int lastdigit;
    int sum=0;
    int arms=n;
    while(n>0)
    {
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==arms)
    {
        cout<<"the number is armstrong";
    }
    else
    {
        cout<<"the number is not armstrong";
    }
}


