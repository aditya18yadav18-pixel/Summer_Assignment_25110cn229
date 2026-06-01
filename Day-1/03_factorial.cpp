#include <iostream>
using namespace std ;
int main(){
    int fact=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    if (n==0){
        cout<<"Factorial is 1.";

    }
    else{
        
        for (int i=1;i<=n;i++){
            fact=fact*i;
        }

        cout<<"Factorial of the given number is: "<<fact;

    }

    
    return 0;

}