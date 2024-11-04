#include<iostream>
using namespace std;

int main() {
    float a=0,b=10;
    float m;
    float xb , xm;
    xb= (b*b)-4;

    while (b-a>=0.00001)
    {
        m=(a+b)/2;
        xm=(m*m)-4;

        if(xm*xb>0)
        a=m;

        else
        b=m;
    }
    
    cout<<a<<endl;

}