#include<iostream>
using namespace std;

int main() {
    float a,b; cout<<"lower limit: "; cin>>a;
    cout<<"upper limit: "; cin>>b;
    float n; cout<<"number of division: "; cin>>n;
    float width = (b-a)/n;
    float area,height,sum=0;

    for(int i=0; i<n; i++) {
        height = (a+i*((b-a)/n))+(a+(i+1)*((b-a)/n));
        area = width*height/2;
        sum+=area;
    }
        cout<<"your area of x: "<<sum<<"\n";

        return 0;
}