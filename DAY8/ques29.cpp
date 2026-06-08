//Write a program to print half pyramid pattern.
#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows:";
    cin>>row;

 if(row<=0){
    cout<<"Oops! Please enter positive number of rows.";
 }
 else{
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }

}