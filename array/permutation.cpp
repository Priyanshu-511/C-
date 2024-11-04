#include<iostream>
#include<cmath>
using namespace std;

int main(){ 
    int n; cout<<"enter the number: "; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int j=0; j<n; j++) {
        for(int k=0; k<n; k++){
            if(j+k>=n){
                cout<<arr[abs(n-(k+j))]<<" ";
            }

            else{
                cout<<arr[k+j]<<" ";
            }
        }
        cout<<"\n";
        for(int k=n; k>0; k--){
            if(j+k>=n){
                cout<<arr[abs(n-(k+j))]<<" ";
            }

            else{
                cout<<arr[k+j]<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}