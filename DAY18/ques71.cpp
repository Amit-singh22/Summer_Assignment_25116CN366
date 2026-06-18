//WAP to Binary search.
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
    int element;
    cout<<"Enter element to search:";
    cin>>element;

    int beg=0,end=n-1,mid;
    while(beg<=end){
        mid=(beg + end)/2;

        if(a[mid]==element){
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else if(element > a[mid]){
            beg=mid + 1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"Element not found.";
}