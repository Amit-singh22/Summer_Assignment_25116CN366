//WAP to frequency of an element.
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
    cout<<"Enter element to find frequency:";
    cin>>element;

    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==element){
          count++;
        }
    }
    cout<<"Frequency of "<<element<<"="<<count;
}