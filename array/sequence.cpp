#include<iostream>
using namespace std;

int main() {
    int arr[100],i,j;

    for(i=0; i<100; i++) {
        cin>>arr[i];

        if(arr[i] == -1)
        break;
    }

    for(j=0; j<i; j++) {
        cout<<arr[j]<<" ";
    }
    return 0;
}