//Write a program to write function to find maximum.
#include <iostream>
using namespace std;
int max(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}
int main(){
    int num1,num2;
    cout<<"Enter two number:";
    cin>>num1>>num2;

    int maximum=max(num1,num2);
    cout<<"Maximum="<<maximum;
}