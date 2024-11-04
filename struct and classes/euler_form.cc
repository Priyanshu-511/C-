#include<iostream>
#include<math.h>
using namespace std;

struct complex{
    double real;
    double img;

    complex(double x, double y){
        real = x;
        img = y;
        double z = sqrt(pow(x,2)+pow(y,2));
        double theta = atan(y/x)*(180.0/M_PI);
        if(x==0){
            if(y>0){
                theta == 90.0;
            }

            else if(y<0){
                theta == -90.0;
            }

            else {
                theta == 0;
            }
        }
        cout<<z<<"e^(i"<<theta<<")degrees"<<"\n";
    }
};

int main(){
    complex a(3,4);
    return 0;
}