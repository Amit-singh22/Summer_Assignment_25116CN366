//Write a program to check whether a number is prime.
#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;
    
    if(num<=1){
        cout<<num<<" is not a prime number.";
    }
    else{
    for(int i=2;i<=num/2;i++){
       if(num%i==0){
        count++;
       }
    }

    if(count==0){
        cout<<num<<" is a prime number.";
    }
    else
     cout<<num<<"is not a prime number.";
  }
}