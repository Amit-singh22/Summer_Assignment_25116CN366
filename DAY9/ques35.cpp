//Write a program to print repeated character.
#include <iostream>
using namespace std;
int main(){
    int ch=65;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)ch;
        }
        ch++;
        cout<<endl;
    }
}