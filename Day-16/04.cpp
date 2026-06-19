#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int size = 8; 

    
    int temp[8]; 
    int j = 0;
    for (int i = 0; i < size - 1; i++) {
        
        if (arr[i] != arr[i + 1]) {
            temp[j] = arr[i]; 
            j++;
        }
    }
    temp[j] = arr[size - 1];
    j++;
    cout << "Unique elements hain: ";
    for (int i = 0; i < j; i++) {
        cout << temp[i] << " ";
    }
    
    return 0;
}