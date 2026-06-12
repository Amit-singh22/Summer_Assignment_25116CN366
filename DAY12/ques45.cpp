//WAP to write a function for palindrome.
#include <iostream>
using namespace std;
void palindrome(int num){
     int lastdigit,reverse=0;
     int original=num;
 while(num!=0){
        lastdigit=num % 10;
        reverse=reverse*10 +lastdigit;
        num/=10;
    }
    if(original==reverse){
        cout<<original<<" is a palindrome.";
    }
    else
        cout<<original<<" is not a palindrome.";
}
int main(){
        int num;
    cout<<"Enter a number:";
    cin>>num;

   palindrome(num);
    
}
