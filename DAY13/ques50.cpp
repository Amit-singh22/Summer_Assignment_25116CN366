//WAP to find sum and average of array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<(float)sum/n;
}