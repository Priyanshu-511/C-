#include<iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int i,t=1;
    for(i = 1; i<=n; i++){
        t=t*i;
    }
    cout<<t<<endl;
}