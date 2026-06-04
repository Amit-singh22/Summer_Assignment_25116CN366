//Write a program to convert binary to decimal.
#include <iostream>
using namespace std;
int main(){
    long long binary;
    cout<<"Enter a binary number:";
    cin>>binary;

    int decimal=0,base=1,rem;

    while(binary>0){
        rem=binary % 10;
        decimal+=rem*base;
        base *=2;
        binary/=10;
    }
    cout<<"Decimal="<<decimal;

}