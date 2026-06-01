#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    int count=0;
    while(n!=0){

        n/=10;

        count++;
    }
    cout<<"The number of digits is "<<count;
    return 0;

}           