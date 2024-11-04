#include<iostream>
using namespace std;

int main() {
    char arr[] = "howdy! fellows";
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<"\n";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}