//WAP to create contact management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, phone;
    int choice;

    while (true) {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contact\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();

                cout << "Enter Contact Name: ";
                getline(cin, name);

                cout << "Enter Phone Number: ";
                getline(cin, phone);

                cout << "\nContact Added Successfully!\n";
                break;

            case 2:
                cout << "\n----- CONTACT DETAILS -----\n";
                cout << "Name : " << name << endl;
                cout << "Phone Number : " << phone << endl;
                break;

            case 3:
                cout << "Exiting Program...\n";
                return 0;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }
    }

    return 0;
}