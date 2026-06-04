//Write a program to convert decimal to binary.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal number:";
    cin>>num;

    long long binary=0;
    int place=1;
    int rem;

    if(num==0){
        cout<<"Binary=0";
        
    }
    else if(num<0){
        cout<<"Oops!Please enter a positive number.";
    }
    else{
    while(num>0){
        int rem=num%2;
        binary+=rem*place;
        place*=10;
        num/=2;
    }

    cout<<binary;
  }
}