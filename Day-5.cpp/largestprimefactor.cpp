#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number: ";
    cin >> n;

    int sum; 
    int count = 0; 

    for(int i = 2; i <= n; i++) 
    {
        if(n % i == 0) 
        {
            sum = i; 
            
            int isPrime = 1; 
            for(int j = 2; j < sum; j++) 
            {
                if(sum % j == 0) 
                {
                    isPrime = 0; 
                    break; 
                }
            }

            if(isPrime == 1) 
            {
                count = sum; 
            }
        }
    }

    cout << "largest prime factor is: " << count << endl;
    return 0;
}
