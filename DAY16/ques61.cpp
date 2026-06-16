//WAP to find missing number in array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element:";
    cin>>n;

    int a[n-1];
      for(int i=0;i<n-1;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
    }
    int total=n*(n+1)/2;
    int missing=total-sum;

    cout<<"Missing number="<<missing;
}