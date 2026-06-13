//WAP to find largest and smallest element.
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
    int largest=a[0],smallest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"Largest element="<<largest<<endl;
    cout<<"Smallest element="<<smallest<<endl;
}