//Write a program to print character triangle.
#include <iostream>
using namespace std;
int main(){

    for(int i=1;i<=5;i++){
            int ch=65;
        for(int j=1;j<=i;j++){
            cout<<(char)ch;
            ch++;
        }
        cout<<endl;
    }
}