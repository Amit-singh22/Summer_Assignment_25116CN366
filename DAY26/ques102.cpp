//WAP to create voing elegibility system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, nationality;
    int age;

    cout << "===== Voting Eligibility System =====\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore(); 

    cout << "Enter your nationality (Indian/Other): ";
    getline(cin, nationality);

    cout << "\n----- Result -----\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Nationality: " << nationality << endl;

    if (age >= 18 && (nationality == "Indian" || nationality == "indian"))
        cout << "Status: Eligible to Vote" << endl;
    else
        cout << "Status: Not Eligible to Vote" << endl;

    return 0;
}