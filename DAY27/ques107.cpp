//WAP to create salary management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int empID[100], n = 0, choice;
    string empName[100];
    float basicSalary[100], bonus[100], totalSalary[100];

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary Details\n";
        cout << "2. Display Salary Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> empID[n];
                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Basic Salary: ";
                cin >> basicSalary[n];

                cout << "Enter Bonus: ";
                cin >> bonus[n];

                totalSalary[n] = basicSalary[n] + bonus[n];

                n++;
                cout << "Salary Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Salary Records Found!\n";
                } else {
                    cout << "\n----- Salary Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "Employee ID  : " << empID[i] << endl;
                        cout << "Employee Name: " << empName[i] << endl;
                        cout << "Basic Salary : " << basicSalary[i] << endl;
                        cout << "Bonus        : " << bonus[i] << endl;
                        cout << "Total Salary : " << totalSalary[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}