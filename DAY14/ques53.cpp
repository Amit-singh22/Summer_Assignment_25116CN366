//WAP to linear search.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element;
    cout<<"Enter element to search:";
    cin>>element;

    int pos=-1;
    for(int i=0;i<n;i++){
        if(a[i]==element){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        cout<<"Element found at index "<<pos;
    }
    else
       cout<<"Element not found";
}