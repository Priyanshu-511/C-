#include<iostream>
using namespace std;

double input(double &y, double &x1) {
    double x2;

    for(int i=0; i<=y*100; i++) {
        x2=(2*x1+(y/(x1*x1)))/3;

        x1=x2;
    }
        cout<< "the cuberoot of the y is: " <<x2<<endl;

    return 0;
}

int main(){
    double a; cout<<"enter the number: "; cin>>a;
    double b=1;
    input(a,b);
}