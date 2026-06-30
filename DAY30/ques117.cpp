//WAP to create student record system using arrays and string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Arrays to store student records
    int rollNo[n];
    string name[n];
    float marks[n];

    // Input student details
    cout << "\nEnter Student Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> rollNo[i];

        cin.ignore(); // Clear input buffer

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    // Display student records
    cout << "\n\n--- Student Records ---\n";
    cout << "Roll No\tName\t\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << rollNo[i] << "\t\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }

    return 0;
}