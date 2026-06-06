//Write a program to recursive sum of digits.
#include <iostream>
using namespace std;
int sod(int n){

    if(n==0)
     return 0;

     return n%10 + sod(n/10);
    
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num<0){
        num=-num;
    }

    cout<<"Sum of digits="<<sod(num);
}