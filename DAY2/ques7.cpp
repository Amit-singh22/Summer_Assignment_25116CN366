//Write a program to find products of digits.
#include <iostream>
using namespace std;
int main(){
    int num,lastdigit=0,mul=1;
    cout<<"Enter a number:";
    cin>>num;

    while(num!=0){
        lastdigit=num % 10;
        mul*=lastdigit;
        num/=10;
    }
    cout<<"product="<<mul;
}