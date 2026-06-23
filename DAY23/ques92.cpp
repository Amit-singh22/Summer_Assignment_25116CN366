//WAP to find maximum occuring character.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    int maxCount = 0;
    char maxChar;

    for (int i = 0; i < str.length(); i++) {
        int count = 1;

        bool visited = false;
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                visited = true;
                break;
            }
        }

        if (visited)
            continue; 
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount;

    return 0;
}