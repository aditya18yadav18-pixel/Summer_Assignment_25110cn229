#include<iostream>
using namespace std;
int primes(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
        return false ;
        }
        else 
        {
            return true;
        }
    }
    
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if (primes(n)){
    cout<<"it is prime number";
}
    else{
    cout<<"not a prime number";
    }
}


