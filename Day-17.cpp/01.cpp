#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int size1 = 3;

    int arr2[] = {1, 4, 6};
    int size2 = 3;

    int mergedArr[6];
    int k = 0; 
    for (int i = 0; i < size1; i++) {
        mergedArr[k] = arr1[i];
        k++;
    }

    for (int j = 0; j < size2; j++) {
        mergedArr[k] = arr2[j];
        k++;
    }
    cout << "Merge karne ke baad array: ";
    for (int i = 0; i < 6; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}