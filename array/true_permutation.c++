#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cout<<"enter the number of index: "; cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    do {
        for(int j=0; j<n; j++) {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    while(next_permutation(arr.begin(),arr.end()));

    return 0;
}