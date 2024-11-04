#include<iostream>
using namespace std;

int dot(int arr1[],int arr2[]) {
    int term,sum=0;
    for(int i=0; i<3; i++){
        term = arr1[i]*arr2[i];
        sum+=term;
    }

    return sum;
}

int main() {
    int vec1[3],vec2[3];

    for(int i=0; i<3; i++) {
        cout<<"enter the v1: ";
        cin>>vec1[i];
    }

    for(int i=0; i<3; i++) {
        cout<<"enter the v2: ";
        cin>>vec2[i];
    }
    
    cout<<dot(vec1,vec2)<<"\n";

    return 0;
}