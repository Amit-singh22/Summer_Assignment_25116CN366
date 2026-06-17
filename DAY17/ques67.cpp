//WAP to intersection of arrays.
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
      int c[n1];
      int k=0;

      for(int i=0;i<n1;i++){
        bool check=false;
        bool alreadyadd=false;
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                check=true;
                break;
            }
        }
        for(int l=0;l<k;l++){
            if(a[i]==c[l]){
                alreadyadd=true;
                break;
            }
        }
        if(check && !alreadyadd){
            c[k++]=a[i];
        }
      }
      cout<<"Intersection array:";
      for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
      }
    }