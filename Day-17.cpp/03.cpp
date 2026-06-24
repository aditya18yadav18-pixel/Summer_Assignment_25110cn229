#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> intersection_set;
    
    for (int num : nums2) {
        if (set1.count(num)) {
            intersection_set.insert(num);
        }
    }
    
    return std::vector<int>(intersection_set.begin(), intersection_set.end());
}

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1, 4};
    std::vector<int> nums2 = {2, 2, 3, 4};
    
    std::vector<int> result = intersection(nums1, nums2);
    
    std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}