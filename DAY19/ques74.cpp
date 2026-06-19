//WAP to substract matrices.
#include <iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter row and column for first matrix:";
    cin>>r1>>c1;

    int a[r1][c1];
    cout<<"Enter first matrix:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter element a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
     int r2,c2;
    cout<<"Enter row and column for second matrix:";
    cin>>r2>>c2;

    int b[r2][c2];
    cout<<"Enter second matrix:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter element b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    }
    int c[r1][c1];
    if(r1==r2 && c1==c2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        cout<<"Substracted Matrix:"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrix cannot be added!!";
    }
}