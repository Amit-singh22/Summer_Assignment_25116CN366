//WAP to count words in a sentence.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
   

    cout << "Enter a sentence: ";
   getline(cin,str);

   int len=str.length();
    int words = 1;
    for (int i = 0; i <len; i++) {
        if (str[i] == ' ')
            words++;
    }

    cout << "Number of words = " << words;
}