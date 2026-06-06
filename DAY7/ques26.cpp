//Write a program to recursive Fibonacci.
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
    return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter number of term:";
    cin>>n;

    if(n<0){
        cout<<"Fibonacci is not defined for negative number.";
    }
    else{
        cout<<"nth fibonacci term is "<<fibonacci(n);
    }

}
