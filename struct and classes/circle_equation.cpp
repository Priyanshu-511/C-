#include<iostream>
using namespace std;

struct circle {
    int x1,x2,y1,y2;
};

int main() {
    circle a,b;
    a.x1=2;
    a.x2=3;
    b.y1=3;
    b.y2=2;
    cout<<"x^2"<<" + "<<"y^2 "<<"- "<<(a.x1+a.x2)<<"x - "<<(b.y1+b.y2)<<"y + "<<(a.x1*a.x2)+(b.y1*b.y2);
}