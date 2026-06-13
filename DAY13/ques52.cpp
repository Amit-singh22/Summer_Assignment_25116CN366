//WAP to count even and odd element.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    int a[n],even=0,odd=0;
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i<<"=";
        cin>>a[i];

        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Number of even element="<<even<<endl;
    cout<<"Number of odd element="<<odd<<endl;
}