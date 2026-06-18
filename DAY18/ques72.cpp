//WAP to sort array in descending order.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element:";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}