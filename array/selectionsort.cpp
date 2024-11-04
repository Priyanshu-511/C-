#include<iostream>
using namespace std;

int main(){
    int n; cout<<"enter the number of index: "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    cout<<"\n";

    for(int i=0; i<n-1; i++){
        int mx = INT_MAX;
        int ind = -1;
        for(int j=i; j<n; j++){
            if(mx>arr[j]){
                mx=arr[j];
                ind = j;
            }
        }
        swap(arr[i], arr[ind]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}