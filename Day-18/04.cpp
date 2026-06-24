#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {34, 11, 90, 25, 12, 22, 64};

    std::sort(arr.begin(), arr.end(), std::greater<int>());

    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}