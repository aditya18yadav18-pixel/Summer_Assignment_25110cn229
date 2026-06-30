#include <iostream>
#include <string>

int main() {
    int score = 0;
    char answer;

    std::cout << "--- Quiz Application ---\n\n";

    std::cout << "Q1. What is the size of 'int' data type in C++ (usually)?\n";
    std::cout << "A. 2 bytes\nB. 4 bytes\nC. 8 bytes\nD. 1 byte\n";
    std::cout << "Your answer: ";
    std::cin >> answer;
    if (answer == 'B' || answer == 'b') score++;

    std::cout << "\nQ2. Which keyword is used to define a constant variable?\n";
    std::cout << "A. final\nB. constant\nC. const\nD. static\n";
    std::cout << "Your answer: ";
    std::cin >> answer;
    if (answer == 'C' || answer == 'c') score++;

    std::cout << "\nQ3. Which of the following is used for a single-line comment in C++?\n";
    std::cout << "A. //\nB. /*\nC. #\nD. --\n";
    std::cout << "Your answer: ";
    std::cin >> answer;
    if (answer == 'A' || answer == 'a') score++;

    std::cout << "\n--- Quiz Over ---\n";
    std::cout << "Your Total Score: " << score << "/3" << std::endl;

    return 0;
}