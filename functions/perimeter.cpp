#include<iostream>
#include<cmath>
using namespace std;

float side(float x, float y, float a, float b) {
    float len;
    len = sqrt(pow((x-a),2)+pow((y-b),2));

    return len;
}

float peri(float l, float m) {
    return l+m;
}

int main() {
    int n; cout<<"enter number of sides: "; cin>>n;
    float x1,y1,x2,y2; cout<<"enter x coordinate: "; cin>>x1;
    cout<<"enter the y coordinate: "; cin>>y1;
    float d,e=0,sum;
    for(int i = 1; i < n; i++) {
    cout<<"enter x coordinate: "; cin>>x2;
    cout<<"enter the y coordinate: "; cin>>y2;
    d = side(x1,y1,x2,y2);
        sum= peri(d,e);
        e=e+d;
        x1=x2;
        y1=y2;
    }
    d = side(x1,y1,x2,y2);
        sum= peri(d,e);
    cout<<2*sum<<endl;

    return 0;
}