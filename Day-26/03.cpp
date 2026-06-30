#include <iostream>

int main() {
    double balance = 5000.0;
    int choice;
    double amount;

    do {
        std::cout << "\n--- ATM Menu ---\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Current Balance: $" << balance << std::endl;
                break;
            case 2:
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                balance += amount;
                std::cout << "Successfully deposited. New Balance: $" << balance << std::endl;
                break;
            case 3:
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    std::cout << "Please collect your cash. Remaining Balance: $" << balance << std::endl;
                } else {
                    std::cout << "Insufficient balance!" << std::endl;
                }
                break;
            case 4:
                std::cout << "Thank you for using our ATM!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please select again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}