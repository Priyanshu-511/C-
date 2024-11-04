#include<iostream>
using namespace std;

int main() {
    int n; cout<<"enter the number of student: "; cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout<<"enter the number of marks of roll no. "<<i+1<<": ";
        cin>>arr[i];
    }

    for(int j=0; j<n; j++) {
        cout<<"marks will be: "<<arr[j]<<"\n";
    }

    return 0;
}