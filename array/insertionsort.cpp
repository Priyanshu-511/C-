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

    for (int i = 0; i < n-1; i++)
    {
        int j = i;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}