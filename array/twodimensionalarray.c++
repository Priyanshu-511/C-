#include<iostream>
using namespace std;

int main() {
    int m,n;cout<<"enter number of rows: ";
    cin>>m;
    cout<<"enter number of column: "; cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}