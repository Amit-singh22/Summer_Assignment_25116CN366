//Write a program to print character pyramid.
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int r=64;
            for(int k=65;k<=64+i;k++){
                cout<<(char)k;
                r++;
            }
            for(int l=r-1;l>=65;l--){
                cout<<(char)l;
            }
        
        cout<<endl;
    }
}