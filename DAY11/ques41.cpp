//Write a program to write function to find sum of two numbers.
#include <iostream>
using namespace std;
int addition(int a,int b){
    return a+b;
}
int main(){
    int num1,num2;
    cout<<"Enter two number:";
    cin>>num1>>num2;

    int sum=addition(num1,num2);
    cout<<"Sum="<<sum;
}