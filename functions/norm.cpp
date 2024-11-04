#include<iostream>
#include<cmath>
using namespace std;

double norm(double x, double y, double z, double k) {
    double out;
    cout<<"your norm will be: ";
    out = sqrt(pow(x,k)+pow(y,k)+pow(z,k));
    cout<<out<<"\n";

    return 0;
}

int main() {
    double a,b,c,t;
    cout<<"enter the x-coordinate: ";
    cin>>a;
    cout<<"enter the y-coordinate: ";
    cin>>b;
    cout<<"enter the z-coordinate: ";
    cin>>c;
    cout<<"enter the vector component: ";
    cin>>t;

    norm (a,b,c,t);

    return 0;
}