//Write a program to write a function to check prime.
#include <iostream>
using namespace std;
int prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n % i==0){
           return 1;
        }
    }
    return 0;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1){
        cout<<"Not prime!!";
    }
    else{
       int count=prime(num);
    
      if(count==0)
    cout<<"Prime number";
    else
        cout<<"Not prime!!";
    }
}