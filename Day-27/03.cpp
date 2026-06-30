#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Salary {
    int empId;
    string name;
    double baseSalary;
};

int main() {
    vector<Salary> payroll;
    int choice;

    while (true) {
        cout << "\n--- Salary System ---\n";
        cout << "1. Add Salary Record\n2. Generate Payslips\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Salary s;
            cout << "Enter Emp ID: "; cin >> s.empId;
            cout << "Enter Name: "; cin.ignore(); getline(cin, s.name);
            cout << "Enter Base Salary: "; cin >> s.baseSalary;
            payroll.push_back(s);
            cout << "✅ Salary record saved!\n";
        } 
        else if (choice == 2) {
            if (payroll.empty()) {
                cout << "No salary records found.\n";
            } else {
                for (const auto& s : payroll) {
                    double hra = s.baseSalary * 0.10; // 10% Allowance
                    double tax = s.baseSalary * 0.15; // 15% Tax
                    double netSalary = s.baseSalary + hra - tax;

                    cout << "\n--- Payslip for " << s.name << " (" << s.empId << ") ---\n";
                    cout << "Base Salary : $" << s.baseSalary << endl;
                    cout << "HRA (+)     : $" << hra << endl;
                    cout << "Tax (-)     : $" << tax << endl;
                    cout << "-----------------------\n";
                    cout << "Net Salary  : $" << netSalary << endl;
                }
            }
        } 
        else if (choice == 3) {
            break;
        } 
        else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}