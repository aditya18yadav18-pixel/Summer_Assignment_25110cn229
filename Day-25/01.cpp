#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"bella", "label", "roller"};
    std::vector<int> minFreq(26, 100);

    for (const std::string& word : words) {
        std::vector<int> count(26, 0);
        for (char ch : word) {
            count[ch - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            minFreq[i] = std::min(minFreq[i], count[i]);
        }
    }

    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0) {
            std::cout << (char)(i + 'a') << " ";
            minFreq[i]--;
        }
    }
    return 0;
}