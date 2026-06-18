//WAP to selection sort.
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
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]){
               minIndex=j;
            }
        }
        int temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}