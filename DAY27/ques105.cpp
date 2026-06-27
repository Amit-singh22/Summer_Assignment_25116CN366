//WAP to create student record management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[100], n = 0, choice;
    string name[100];
    float marks[100];

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> roll[n];
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Records Found!\n";
                } else {
                    cout << "\n----- Student Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
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