#include<iostream>
using namespace std;
int main()
{
int product=1;
int lastdigit;
int n;
cout<<"enter the number :";
cin>>n;
while(n>0)
{
    lastdigit=n%10;
    product=product*lastdigit;
    n=n/10;
}
cout<<"product of digit is :"<<product;

}