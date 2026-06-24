#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = 4;
    int size2 = 4;

    cout << "Union Array: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }


    for (int j = 0; j < size2; j++) {
        bool isDuplicate = false;

    
        for (int i = 0; i < size1; i++) {
            if (arr2[j] == arr1[i]) {
                isDuplicate = true; 
                break;
            }
        }

        if (isDuplicate == false) {
            cout << arr2[j] << " ";
        }
    }

    return 0;
}