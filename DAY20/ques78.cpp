//WAP to check symmetric matrix.
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
    if(r!=c){
        cout<<"Not symmetric,Only square matrix can be symmetric.";
        return 0;
    }
    bool symmetric=true;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] != a[j][i]){
                symmetric=false;
                break;
            }
        }
     }
     if(symmetric){
        cout<<"Matrix is symmetric.";
     }
     else
     cout<<"Matrix is not symmetric.";
} 