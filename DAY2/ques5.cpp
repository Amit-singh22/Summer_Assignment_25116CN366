//Write a program to find sum of digits of a number.
#include <iostream>
using namespace std;
int main(){
    int num,lastdigit=0,sum=0;
    cout<<"Enter a number:";
    cin>>num;

    while(num!=0){
        lastdigit=num % 10;
        sum+=lastdigit;
        num/=10;
    }
    cout<<"Sum="<<sum;
}