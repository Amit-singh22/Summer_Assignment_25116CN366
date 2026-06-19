//WAP to find diagonal sum.
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row and column for matrix:";
    cin>>r>>c;

    int a[r][c];
    cout<<"Enter matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter element a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    int sum=0;
    if(r==c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if((i==j) || (i+j==r-1)){
                sum+=a[i][j];
            }
        }
    }
    cout<<"Sum of both primary and secondary diagonal="<<sum;
}
    else{
        cout<<"Cannot find diagonal sum.";
    }
}