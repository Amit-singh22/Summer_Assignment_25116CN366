//WAP to Transpose matrix.
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
    int transpose[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           transpose[i][j]=a[j][i];
        }
    }
    cout<<"Transpose Matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}