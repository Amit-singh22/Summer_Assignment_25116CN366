//WAP to rotate array right.
#include <iostream>
using namespace std;
int reverse(int a[],int start ,int end){
    int i=start;
    int j=end;
    while(i<j){
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
    }
    int k;
    cout<<"Enter rotation times:";
    cin>>k;
    if(k>n){
        k=k % n;
    }
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}