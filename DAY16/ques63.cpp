//WAP to find pair with given sum.
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
    int sum;
    cout<<"Enter required sum:";
    cin>>sum;

    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<"Pair="<<a[i]<<"+"<<a[j]<<"="<<sum<<endl;
                found=true;
            }
        }
    }
    if(found==false){
        cout<<"No pair found!";
    }
}