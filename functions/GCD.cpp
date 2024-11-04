#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(a%b !=0) {
        int rem = a%b;
        a=b;
        b=rem;
    }
    return b;
}

int main() {
    int m,n; cout<<"enter the larger number: "; cin>>m;
    cout<<"enter smaller number: "; cin>>n;
    cout<<"your Output is: "<<GCD(m,n)<<"\n";

    return 0;
}