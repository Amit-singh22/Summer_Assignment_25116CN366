//WAP to remove duplicates from array.
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
    cout<<"Array after removing duplicates:";
    for(int i=0;i<n;i++){
        bool duplicate=false;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate==false){
            cout<<a[i]<<" ";
        }
    }
   
}