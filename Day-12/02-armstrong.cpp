#include<iostream>
using namespace std;
int armstrong(int n)
{ 
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
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter thr number:";
    cin>>n;
    if(armstrong(n))
    cout<<"armstrong number";
    else
    cout<<"not armstrong";
}
