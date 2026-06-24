#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findCommonElements(std::vector<int>& arr1, std::vector<int>& arr2) {
    std::vector<int> common;
    
    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end());
    
    std::set_intersection(arr1.begin(), arr1.end(),
                          arr2.begin(), arr2.end(),
                          std::back_inserter(common));
    return common;
}

int main() {
    std::vector<int> array1 = {1, 2, 3, 4, 5};
    std::vector<int> array2 = {3, 4, 5, 6, 7};

    std::vector<int> result = findCommonElements(array1, array2);

    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}