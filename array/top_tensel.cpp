#include<iostream>
using namespace std;

int main() {
    int arr[100],i;

    for(i=0; i<100; i++) {
        cin>>arr[i];

        if(arr[i] == -1)
        break;
    }

    

    for(int k=0; k<=i; k++) {
    for(int p=0; p<=i; p++) {
        if(arr[p]<arr[p+1])
        swap(arr[p],arr[p+1]);
    }
    }

        cout<<"top 10 marks are: "<<"\n";
    for(int m=0; m<10; m++) {
        cout<<arr[m]<<" "<<endl;
    }
    return 0;
}