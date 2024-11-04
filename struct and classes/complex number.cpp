#include<iostream>
using namespace std;

struct complex {
    float real;
    float img;
};

float complexNUm(float m, float n, float x, float y){
    cout<<m+x<<" + "<<y+n<<"i"<<"\n";
    cout<<m-x<<" + "<<n-y<<"i"<<"\n";
    cout<<(m*x)-(n*y)<<" + "<<(n*x)+(m*y)<<"i"<<"\n";
    cout<<((m*x)+(n*y))/((x*x)+(y*y))<<" + "<<((n*x)-(m*y))/((x*x)+(y*y))<<"i"<<"\n";
    return 0;
}

int main() {
    complex a,b;
    cout<<"enter real then imaginary part: ";
    cin>>a.real>>a.img;
    cin>> b.real>>b.img;

    complexNUm(a.real, a.img, b.real, b.img);
    return 0;
}