//WAP to create library management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, id, quantity;
    string title, author;

    while (true) {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                cout << "Enter Book ID: ";
                cin >> id;
                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title);

                cout << "Enter Author Name: ";
                getline(cin, author);

                cout << "Enter Quantity: ";
                cin >> quantity;

                cout << "\nBook Added Successfully!\n";
                break;

            case 2:
                cout << "Enter Book ID to Issue: ";
                cin >> id;
                cout << "Book Issued Successfully!\n";
                break;

            case 3:
                cout << "Enter Book ID to Return: ";
                cin >> id;
                cout << "Book Returned Successfully!\n";
                break;

            case 4:
                cout << "Exiting Program...\n";
                return 0;

            default:
                cout << "Invalid Choice! Please try again.\n";
        }
    }

    return 0;
}