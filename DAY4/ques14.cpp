//Write a program to find nth fibonacci term.
#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=1,sum;
    cout<<"Emter the value of n:";
    cin>>n;

    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
        for(int i=3;i<=n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<b;
    }
}