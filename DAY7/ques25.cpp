//Write a program to recursive factorial.
#include <iostream>
using namespace std;

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num * factorial(num-1);
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num<0){
        cout<<"Factorial not defined!!";
    }
    else{
        cout<<"Factorial="<<factorial(num);
    }
}