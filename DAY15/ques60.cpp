//WAP to move zeroes to end.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            for(int j=i+1;j<n;j++){
                if(a[j]!=0){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}