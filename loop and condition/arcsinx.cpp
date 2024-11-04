#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float b;
    cout<<"value of x "; cin>>b;
    float n = b*100000;
    float width = (b)/n;
    float area,height,sum=0;
    for(int i=0; i<=n; i++) {
        height = 1/sqrt(1-pow(i*b/n,2));
        area = width*height;
        sum+=area;
    }
    cout<<"value of arcsin("<<b<<") is: "<<sum<<"\n";

    return 0;
}