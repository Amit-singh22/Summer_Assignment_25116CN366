//WAP to create menu driven string operation system.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING OPERATIONS =====\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length of string = " << str.length() << endl;
                break;

            case 2: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String: " << temp << endl;
                break;
            }

            case 3: {
                string temp = str;
                for (int i = 0; i < temp.length(); i++) {
                    temp[i] = toupper(temp[i]);
                }
                cout << "Uppercase String: " << temp << endl;
                break;
            }

            case 4: {
                string temp = str;
                for (int i = 0; i < temp.length(); i++) {
                    temp[i] = tolower(temp[i]);
                }
                cout << "Lowercase String: " << temp << endl;
                break;
            }

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}