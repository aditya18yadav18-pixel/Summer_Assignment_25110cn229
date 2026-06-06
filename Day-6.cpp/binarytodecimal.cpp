#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the binary number:";
    cin>>n;
    int count=0;
    int decimal=0;
    while(n>0)
    {
        int lastdigit = n%10;
        decimal = decimal + lastdigit*pow(2,count);
        n=n/10;
        count++;


    }
    cout<<"the decimal representation:"<<decimal<<endl;
}
