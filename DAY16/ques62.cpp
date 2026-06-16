//WAP to find maximum frequency element.
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
    int maxfreq=0,maxelement;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=a[i];
        }
    }
    cout<<"Maximum frequency element="<<maxelement<<endl;
    cout<<"Frequency="<<maxfreq<<endl;
}