//WAP to union of arrays.
#include <iostream>
using namespace std;
int main(){
     int n1;
    cout<<"Enter number of element for first array:";
    cin>>n1;

    int a[n1];
      for(int i=0;i<n1;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];
    }
      int n2;
    cout<<"Enter number of element for second array:";
    cin>>n2;

    int b[n2];
      for(int i=0;i<n2;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>b[i];
    }
    int c[n1+n2];
    int k=0;
    for(int i=0;i<n1;i++){
         c[k++]=a[i];
    }
    for(int i=0;i<n2;i++){
        bool check=false;
        for(int j=0;j<n1;j++){
            if(b[i]==a[j]){
                check=true;
                break;
            }
        }
        if(check==false){
              c[k++]=b[i];
        }
         
    }
    cout<<"union array:";
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
}