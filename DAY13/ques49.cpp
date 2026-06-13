//WAP to input and display array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
    }
    cout<<"Array element are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}