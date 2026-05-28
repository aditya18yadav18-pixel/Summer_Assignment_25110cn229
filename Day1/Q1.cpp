#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which sum has to be calculated: ";
    cin>>n;
    int sum =n*(n+1)/2;
    cout<<sum;
    return 0;
}