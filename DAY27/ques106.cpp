//WAP to create employee management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int empID[100], n = 0, choice;
    string empName[100], department[100];
    float salary[100];

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee Record\n";
        cout << "2. Display All Employee Records\n";
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

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Employee Records Found!\n";
                } else {
                    cout << "\n----- Employee Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "Employee ID : " << empID[i] << endl;
                        cout << "Name        : " << empName[i] << endl;
                        cout << "Department  : " << department[i] << endl;
                        cout << "Salary      : " << salary[i] << endl;
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