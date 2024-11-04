#include<iostream>
using namespace std;
int main() {
    double y; cout<<"enter the number: "; cin>>y;
    double x1=1,x2;

    for(double i=0; i<=y*100; i++) {
        x2=(2*x1+(y/(x1*x1)))/3;
        x1=x2;
    }
    cout<<"your output must be: "<<x2<<"\n";

    return 0;
}