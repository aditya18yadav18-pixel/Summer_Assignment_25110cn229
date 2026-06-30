#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string dept;
};

int main() {
    vector<Employee> employees;
    int choice;

    while (true) {
        cout << "\n--- Employee System ---\n";
        cout << "1. Add Employee\n2. Show Employees\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Employee e;
            cout << "Enter Emp ID: "; cin >> e.id;
            cout << "Enter Name: "; cin.ignore(); getline(cin, e.name);
            cout << "Enter Department: "; getline(cin, e.dept);
            employees.push_back(e);
            cout << "✅ Employee Registered!\n";
        } 
        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No employees found.\n";
            } else {
                cout << "\n--- Employee Directory ---\n";
                for (const auto& e : employees) {
                    cout << "ID: " << e.id << " | Name: " << e.name << " | Dept: " << e.dept << endl;
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