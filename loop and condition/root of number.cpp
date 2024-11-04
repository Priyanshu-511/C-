#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;

    int d= ((b*b)-4*a*c);

    if(d>=0)
    cout<<(-b-sqrt(d))/(2*a)<<" and "<<(-b+sqrt(d))/(2*a)<<"\n";

    else
    cout<<(-b)/(2*a)<<"+ i"<<sqrt(abs(d))/(2*a)<<" and "<<(-b)/(2*a)<<"- i"<<sqrt(abs(d))/(2*a)<<"\n";

    return 0;
}