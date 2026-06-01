//write a program to check strong number.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    int original=num;
    int lastdigit,fact,sum=0;
    while(num!=0){
        lastdigit=num % 10;
        fact=1;
        for(int i=1;i<=lastdigit;i++){
            fact*=i;
        }
        sum+=fact;
        num/=10;
    }
    if(sum==original){
        cout<<original<<" is a strong number.";
    }
    else{
        cout<<original<<" is not a stong number.";
    }
}