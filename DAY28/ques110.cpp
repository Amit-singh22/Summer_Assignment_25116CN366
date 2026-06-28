//WAP to create bank account system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int accNo, choice;
    float balance = 0, amount;

    // Create Account
    cout << "===== BANK ACCOUNT SYSTEM =====\n";
    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNo;

    while (true) {
        cout << "\n----- MENU -----\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully!\n";
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Amount Withdrawn Successfully!\n";
                } else {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 3:
                cout << "\nAccount Holder: " << name;
                cout << "\nAccount Number: " << accNo;
                cout << "\nCurrent Balance: Rs. " << balance << endl;
                break;

            case 4:
                cout << "Thank You for Using Bank Account System!\n";
                return 0;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }
    }

    return 0;
}