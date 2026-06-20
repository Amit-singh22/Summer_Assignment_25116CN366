//WAP to find row-wise sum.
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
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        cout<<"Row "<<i+1<<" sum="<<sum<<endl;
    }
}