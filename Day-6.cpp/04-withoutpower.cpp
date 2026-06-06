#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"the required power is;";
    cin>>n;

    int x;
    cout<<"enter the number to be raised to the power:";
    cin>>x;
    int power =1;

    for(int i=1;i<=n;i++)
    {
        power = power*x;
    }
    cout<<"the required answer is:"<<power<<endl;

}

