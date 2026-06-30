//WAP to develop complete mini project using arrays strings and function.
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

// Function to add students
void addStudents(int roll[], string name[], float marks[], int &n) {
    int count;
    cout << "How many students do you want to add? ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "\nEnter details of Student " << n + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll[n];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[n]);

        cout << "Enter Marks: ";
        cin >> marks[n];

        n++;
    }
}

// Function to display students
void displayStudents(int roll[], string name[], float marks[], int n) {
    if (n == 0) {
        cout << "No records found.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";
    cout << "Roll No\tName\t\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

// Function to search student
void searchStudent(int roll[], string name[], float marks[], int n) {
    int r, found = 0;

    cout << "Enter Roll Number to search: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "\nStudent Found\n";
            cout << "Roll Number: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Student not found.\n";
}

// Function to update marks
void updateMarks(int roll[], float marks[], int n) {
    int r, found = 0;

    cout << "Enter Roll Number: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Marks updated successfully.\n";
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Student not found.\n";
}

int main() {
    int roll[MAX], n = 0, choice;
    string name[MAX];
    float marks[MAX];

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Students\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudents(roll, name, marks, n);
                break;

            case 2:
                displayStudents(roll, name, marks, n);
                break;

            case 3:
                searchStudent(roll, name, marks, n);
                break;

            case 4:
                updateMarks(roll, marks, n);
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}