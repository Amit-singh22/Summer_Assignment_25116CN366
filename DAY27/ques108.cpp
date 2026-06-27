//WAP to create marksheet generation system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo, m1, m2, m3, m4, m5, total;
    float percentage;
    char grade;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks of 5 Subjects:\n";
    cout << "Subject 1: ";
    cin >> m1;
    cout << "Subject 2: ";
    cin >> m2;
    cout << "Subject 3: ";
    cin >> m3;
    cout << "Subject 4: ";
    cin >> m4;
    cout << "Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    cout << "\n\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;
    cout << "--------------------------------\n";
    cout << "Subject 1 Marks : " << m1 << endl;
    cout << "Subject 2 Marks : " << m2 << endl;
    cout << "Subject 3 Marks : " << m3 << endl;
    cout << "Subject 4 Marks : " << m4 << endl;
    cout << "Subject 5 Marks : " << m5 << endl;
    cout << "--------------------------------\n";
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (grade == 'F')
        cout << "Result      : Fail\n";
    else
        cout << "Result      : Pass\n";

    return 0;
}