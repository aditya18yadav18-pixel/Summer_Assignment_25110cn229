#include <iostream>
using namespace std;

int main() {
 int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    int sum = 0;
    double average; 
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
        sum += arr[i]; // Adds each element to the sum variable
    }
    average = (double)sum / n; 
    cout << "\n--- Results ---" << endl;
    cout << "Sum of elements     = " << sum << endl;
    cout << "Average of elements = " << average << endl;

    return 0;
}