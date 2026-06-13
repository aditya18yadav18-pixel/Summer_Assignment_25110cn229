#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
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
    int smallest = arr[0];
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; 
        }
        if (arr[i] > largest) {
            largest = arr[i];  
        }
    }
    cout << "\n--- Results ---" << endl;
    cout << "Smallest element = " << smallest << endl;
    cout << "Largest element  = " << largest << endl;

    return 0;
}