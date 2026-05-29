//Write a program to check whether a number is palindrome.
#include <iostream>
using namespace std;
int main(){
    int num,lastdigit,reverse=0;
    cout<<"Enter a number:";
    cin>>num;
    int original=num;
    while(num!=0){
        lastdigit=num % 10;
        reverse=reverse*10 +lastdigit;
        num/=10;
    }
    if(original==reverse){
        cout<<"Number is palindrome!";
    }
    else
    cout<<"Number is not palindrome!";
}