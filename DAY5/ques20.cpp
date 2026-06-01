//Write a program to find largest prime factor.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num<=1){
        cout<<"Oops no prime factor exists!!";
    }
    else{
    int largestprime=0;
    for(int i=2;i<=num;i++){
        if(num % i==0){
            bool prime=true;
            for(int j=2;j<=i/2;j++){
                if(i % j==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                largestprime=i;
            }
        }

    }
    cout<<"Largest prime factor="<<largestprime;
  }
}