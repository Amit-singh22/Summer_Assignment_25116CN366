//Write a program to count set bits in a number.
#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;

    if(num==0){
        cout<<"Number of set bits=0";
    }
    else {
        while(num>0){
            count +=num & 1;
            num>>=1;
        }
        cout<<"Number of set bits="<<count;
    }

}