#include<iostream>
using namespace std;

int main() {
    int a,b,c; cout<<"enter all three number: "; cin>>a>>b>>c;
    
    if(a>=b && b>=c)
    cout<<a<<" "<<b<<" "<<c<<endl;

    else if(b>=c && c>=a)
    cout<<b<<" "<<c<<" "<<a<<endl;

    else if(c>=a && a>=b)
    cout<<c<<" "<<a<<" "<<b<<endl;

    else if(a>=c && c>=b)
    cout<<a<<" "<<c<<" "<<b<<endl;

    else if(b>=a && a>=c)
    cout<<b<<" "<<a<<" "<<c<<endl;

    else
    cout<<c<<" "<<b<<" "<<a<<endl;
}