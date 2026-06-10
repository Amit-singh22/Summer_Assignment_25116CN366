//Write a program to print number pyramid.
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int r=0;
            for(int k=1;k<=i;k++){
                cout<<k;
                r++;
            }
            for(int l=r-1;l>=1;l--){
                cout<<l;
            }
        
        cout<<endl;
    }
}