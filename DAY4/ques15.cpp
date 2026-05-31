//Write a program to check armstrong number.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,rem,count=0,sum=0;
    cout<<"Enter a number:";
    cin>>num;

    int num1=num;
    int original=num1;
    while(num!=0){
        count++;
        num/=10;
    }
    
    while(num1!=0){
        rem=num1%10;

        int power=1;
        for(int i=0;i<count;i++){
            power*=rem;
        }
        sum+=power;
        num1/=10;
    }
    
    if(original==sum)
    cout<<original<<" is an armstrong number:";

    else
    cout<<original<<" is not an armstrong number:";

}