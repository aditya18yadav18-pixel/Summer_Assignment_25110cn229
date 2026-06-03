 #include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers :";
    cin >> a >> b;

    int maxnum =(a>b)?a:b;

    int lcm = maxnum;
    while(lcm % a != 0 || lcm % b != 0)
    {
        lcm += maxnum;
    }
    cout << "LCM of " << a << " and " << b << " is " << lcm;
}
