//WAP to create mini library system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int bookId[n];
    string title[n], author[n];
    bool issued[n];

    // Input book details
    cout << "\nEnter Book Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> bookId[i];

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[i]);

        cout << "Enter Author Name: ";
        getline(cin, author[i]);

        issued[i] = false; // Initially all books are available
    }

    int choice;

    do {
        cout << "\n\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Display All Books\n";
        cout << "2. Issue a Book\n";
        cout << "3. Return a Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nBook ID\tTitle\t\tAuthor\t\tStatus\n";
                for (int i = 0; i < n; i++) {
                    cout << bookId[i] << "\t\t"
                         << title[i] << "\t\t"
                         << author[i] << "\t\t"
                         << (issued[i] ? "Issued" : "Available")
                         << endl;
                }
                break;

            case 2: {
                int id, found = 0;
                cout << "Enter Book ID to issue: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (bookId[i] == id) {
                        found = 1;
                        if (!issued[i]) {
                            issued[i] = true;
                            cout << "Book issued successfully.\n";
                        } else {
                            cout << "Book is already issued.\n";
                        }
                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";
                break;
            }

            case 3: {
                int id, found = 0;
                cout << "Enter Book ID to return: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (bookId[i] == id) {
                        found = 1;
                        if (issued[i]) {
                            issued[i] = false;
                            cout << "Book returned successfully.\n";
                        } else {
                            cout << "Book was not issued.\n";
                        }
                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}