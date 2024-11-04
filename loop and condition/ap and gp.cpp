#include<iostream>
using namespace std;

int main() {
    int a,d,n,r,temp; cout<<"enter first term: "; cin>>a;
    cout<<"enter common differrence: "; cin>>d;
    cout<<"enter common ratio: "; cin>>r;
    cout<<"enter number of term: "; cin>>n;
    temp=a;

    for(int i=0; i<n; i++){
        cout<<"in ap the "<<i+1<<"th term is: "<<a<<"\n";
        a+=d;
    }
    cout<<"\n";
    cout<<endl;

    a=temp;

    for(int j=0; j<n ; j++) {
        cout<<"in gp the "<<j+1<<"th term is: "<<a<<"\n";
        a*=r;
    }
    cout<<endl;
    cout<<endl;
    return 0;
}