//Write a program to find x^n without pow().
#include <iostream>
using namespace std;
int main(){
    int x,n,result=1;
    cout<<"Enter base:";
    cin>>x;

    cout<<"Enter power:";
    cin>>n;

    if(n<0){
        cout<<"please enter non negative power.";
    }
    else{
        for(int i=1;i<=n;i++){
            result *=x;
        }
        cout<<x<<"^"<<n<<"="<<result;
    }
}