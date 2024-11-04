#include<iostream>
using namespace std;

int rec(int n) {
    int x=1,y=1,z=1;
    int w;

    for(int i=0; i<n; i++) {
        w=x+y+z;
        z=y;
        y=x;
        x=w;
    }
    //w=x+y+z;

    return w;
}

int main() {
    int n;cin>>n;
    cout<<"recursion till: "<<rec(n)<<"\n";

    return 0;
}