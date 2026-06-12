//WAP to write function for perfect number.
#include <iostream>
using namespace std;
int perfect(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num % i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num<=0){
        cout<<"Perfect number is defined only for positive integers.";
    }
    else{
    int sum=perfect(num);
    if(sum==num){
        cout<<num<<" is a perfect number.";
    }
    else
      cout<<num<<" is not a perfect number.";
}
}