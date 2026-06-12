#include<iostream>
using namespace std;
int perfect(int n)
{
    int lastdigit;
    int sum =0;
    int count = n;
    while(n>0)
    {
        lastdigit = n%10;
        sum = sum + lastdigit;
        n=n/10;
    }
    if(sum==count)
    return true;
    else return false;
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(perfect(n))
    cout<<"perfect number";
    else 
    cout<<"not perfect";

}

