#include<iostream>
using namespace std;

int main() {
    int arr[10];

    for(int i=0; i<10; i++) {
        arr[i]=0;
        for(int j=0; j<100; j++) {
            float marks;
            cin>>marks;
            int index = marks/10;
            if(index>=0 && index<=9)
            arr[index]++;

            else cout<<"out of range"<<"\n";
        }
    }

    for(int i=0; i<10; i++) {
        cout<<arr[i]<<"\n";
    }
}