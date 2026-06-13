#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    int evenCount = 0;
    int oddCount = 0;


    cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    cin >> n;
    if (n <= 0 || n > MAX_SIZE) {
        cout << "Invalid size! Please enter a number between 1 and " << MAX_SIZE << "." << endl;
        return 1;
    }

    
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;  
        }
    }
    cout << "\n--- Results ---" << endl;
    cout << "Total Even elements = " << evenCount << endl;
    cout << "Total Odd elements  = " << oddCount << endl;

    return 0;
}