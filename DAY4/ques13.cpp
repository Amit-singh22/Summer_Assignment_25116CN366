//Write a program to generate fibonacci series.
#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=1,sum;
    cout<<"Enter the number of terms:";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
    }
}