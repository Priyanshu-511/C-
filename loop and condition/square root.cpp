#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double x1=1;
    double x2;
    double y; cout<<"number of which square root need to find: "; cin>>y;

    for(int i=0; i<=10000*(floor(log10(y)+1)); i++){
        x2 = 0.5*(x1+(y/x1));

        x1=x2;
    }

    cout<<"the square root is: "<<x2<<"\n";

    return 0;
}