//WAP to create mini employee management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int empID[n];
    string name[n], department[n];
    float salary[n];

    // Input employee details
    cout << "\nEnter Employee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> empID[i];

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name[i]);

        cout << "Enter Department: ";
        getline(cin, department[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    int choice;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Display All Employees\n";
        cout << "2. Search Employee by ID\n";
        cout << "3. Update Salary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nID\tName\t\tDepartment\tSalary\n";
            for (int i = 0; i < n; i++) {
                cout << empID[i] << "\t"
                     << name[i] << "\t\t"
                     << department[i] << "\t\t"
                     << salary[i] << endl;
            }
            break;

        case 2: {
            int id, found = 0;
            cout << "Enter Employee ID to search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cout << "\nEmployee Found:\n";
                    cout << "ID: " << empID[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Department: " << department[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 3: {
            int id, found = 0;
            float newSalary;

            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cout << "Enter New Salary: ";
                    cin >> newSalary;
                    salary[i] = newSalary;
                    cout << "Salary updated successfully.\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}