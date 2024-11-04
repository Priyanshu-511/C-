#include<iostream>
using namespace std;

int fact(int x) {
    if(x==0 || x==1)
    return 1;

    else
    return x*fact(x-1);
}

int nCr(int n, int r) {
    return fact(n)/(fact(n-r)*fact(r));
}

int main() {
    int n,r;
    cout<<"total number of super-script: "; cin>>n;
    cout<<"total number of sub-script: "; cin>>r;

    cout<<n<<"C"<<r<<" = "<<nCr(n,r)<<"\n";
}