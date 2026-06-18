#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 3, 0, 12};
    int n = 5;
    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            j++;
        }
    }

    cout << "Array after moving zeroes: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}