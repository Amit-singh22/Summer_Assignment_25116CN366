//Write a program to recursive reverse number.
#include <iostream>
using namespace std;
int reversenum(int n,int reverse){
    if(n==0){
        return reverse;
    }
    return reversenum(n/10,reverse*10 + n%10);
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    int reverse=0;
    cout<<"Reverse number="<<reversenum(num,reverse);
}