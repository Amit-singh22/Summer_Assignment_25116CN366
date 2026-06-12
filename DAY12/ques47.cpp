//WAP to write function for fibonacci.
#include <iostream>
using namespace std;
int fibonacci(int n){
    int a=0,b=1,sum;
     if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else{
        for(int i=3;i<=n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        return b;
    }

}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
  if(n<=0){
    cout<<"Please enter natural number.";
  }
  else{
   int fibo=fibonacci(n);
   cout<<"Nth fibonacci term is "<<fibo;
}
}