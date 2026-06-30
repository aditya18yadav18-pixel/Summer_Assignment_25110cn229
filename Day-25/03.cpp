#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Rahul", "Amit", "Vijay", "Aman", "Deepak"};

    std::sort(names.begin(), names.end());

    for (const std::string& name : names) {
        std::cout << name << " ";
    }
    return 0;
}