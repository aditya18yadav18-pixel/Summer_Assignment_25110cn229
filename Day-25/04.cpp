#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compareLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

int main() {
    std::vector<std::string> words = {"apple", "pie", "banana", "kiwi", "am"};

    std::sort(words.begin(), words.end(), compareLength);

    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    return 0;
}