#include<iostream>
using namespace std;

int main(){
    int size = 5;
    int* arr = new int[size]{1,2,3,4,5};
    for(auto s=0 ; s<size; s++){
        cout<<arr[s]<<" ";
    }
    delete[] arr;
    return 0;
}