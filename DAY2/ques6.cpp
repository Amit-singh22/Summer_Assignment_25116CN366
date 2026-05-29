//Write a program to reverse a number.
#include <iostream>
using namespace std;
int main(){
    int num,lastdigit,reverse=0;
    cout<<"Enter a number:";
    cin>>num;

    while(num!=0){
        lastdigit=num % 10;
        reverse=reverse*10 +lastdigit;
        num/=10;
    }
    cout<<"Reverse number is "<<reverse;
}