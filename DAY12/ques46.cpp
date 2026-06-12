//WAP to write function for armstrong.
#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int num){
     int rem,count=0,sum=0;
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
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

  int sum=armstrong(num);
    
    if(num==sum)
    cout<<num<<" is an armstrong number:";

    else
    cout<<num<<" is not an armstrong number:";

}