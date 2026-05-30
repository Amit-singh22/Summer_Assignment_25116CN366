//Write a program to print prime numbers in a range.
#include <iostream>
using namespace std;
int main(){
    int count=0;

    for(int i=1;i<=100;i++){
        count=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==1){
            cout<<i<<" ";
        }
    }
}