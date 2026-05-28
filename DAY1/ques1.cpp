// Write a program to calculate sum of first N natural number.

#include <iostream>
using namespace std;

int main(){
    int N,sum=0;

    cout<<"Enter a number:";
    cin>>N;

    for(int i=1;i<=N;i++){
        sum +=i;
    }

    cout<<"Sum="<<sum;
}