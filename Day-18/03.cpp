#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {11, 12, 22, 25, 34, 64, 90};
    int target = 25;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result;
    } else {
        std::cout << "Element not found";
    }

    return 0;
}