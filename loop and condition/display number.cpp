#include<iostream>
using namespace std;

int main() {
    int i=1; int n; cout<<"max number: "; cin>>n;

    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=n);

    return 0;
}