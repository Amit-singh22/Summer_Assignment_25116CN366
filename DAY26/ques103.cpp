//WAP to create ATM simulation.
#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin;
    int choice, amount, balance = 10000;

    cout << "===== ATM Simulation =====\n";
    cout << "Enter ATM PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Invalid PIN!" << endl;
        return 0;
    }

    do {
        cout << "\n===== ATM Menu =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully." << endl;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                } else {
                    cout << "Insufficient Balance!" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using ATM." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}