//Write a program to print armstrong numbers in a range.
#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter starting number:";
    cin>>n1;
    cout<<"Enter ending number:";
    cin>>n2;

    for(int i=n1;i<=n2;i++){
        int temp=i,count=0;
        int sum=0;

        while(temp!=0){
            count++;
            temp/=10;
        }
        temp=i;
        while(temp!=0){
            int rem=temp%10;
            
        int power=1;
        for(int i=0;i<count;i++){
            power*=rem;
        }
        sum+=power;
        temp/=10;
        }
        if(sum==i){
            cout<<i<<" ";
        }
    }
}