//Write a program to write function to find factorial.
 #include <iostream>
 using namespace std;
 int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
 }
 int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num<0){
        cout<<"Factorial not defined!!";
    }
    else{
        cout<<"Factorial="<<fact(num);
    }
 }