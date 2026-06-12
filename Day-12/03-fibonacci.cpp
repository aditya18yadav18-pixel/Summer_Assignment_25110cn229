#include<iostream>
using namespace std;
int fabonacci(int n)
{
    int f1=0;
    int f2= 1;
    int f3=f1+f2;
    for(int i=3;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return f3;
    
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<< fabonacci(n);

}