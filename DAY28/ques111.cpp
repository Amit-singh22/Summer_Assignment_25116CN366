//WAP to create ticket booking system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int tickets, choice;
    const int ticketPrice = 500;
    int totalAmount = 0;

    while (true) {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. View Booking Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                cout << "Enter Passenger Name: ";
                getline(cin, name);

                cout << "Enter Number of Tickets: ";
                cin >> tickets;

                totalAmount = tickets * ticketPrice;

                cout << "\nTicket Booked Successfully!\n";
                cout << "Total Amount: Rs. " << totalAmount << endl;
                break;

            case 2:
                cout << "\n----- BOOKING DETAILS -----\n";
                cout << "Passenger Name : " << name << endl;
                cout << "Number of Tickets : " << tickets << endl;
                cout << "Total Amount : Rs. " << totalAmount << endl;
                break;

            case 3:
                cout << "Thank You for Using Ticket Booking System!\n";
                return 0;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }
    }

    return 0;
}