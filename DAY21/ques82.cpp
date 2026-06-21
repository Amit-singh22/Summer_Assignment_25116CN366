//WAP to reverse a string.
#include <iostream>
using namespace std;
int main(){
    char str[100];

    cout<<"Enter a string:";
    cin.getline(str,100);

    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    for(int i=0;i<count/2;i++){
      char temp=str[i];
      str[i]=str[count-1-i];
      str[count-1-i]=temp;
    }
    cout<<"Reversed string="<<str;
}