//WAP to find longest word.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str, word, longest = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length();

    return 0;
}