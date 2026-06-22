//WAP to check palindrome string.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;

    cout<<"Enter a string:";
    cin>>str;

    bool flag=true;
    int length=str.length();
 
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"Palindrome string.";
    else
    cout<<"Not a palindrome string.";

    
     
}