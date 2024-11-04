#include<iostream>
using namespace std;

int main() {
    float a,b; cout<<"lower limit: "; cin>>a;
    cout<<"upper limit: "; cin>>b;
    float n; cout<<"number of division: "; cin>>n;
    float width = (b-a)/n;
    float area,height,sum=0;

    for(int i=0; i<=n; i++) {
        height = 1/(a+(i*width));
        area = height*width;
        sum=sum + area;
    }

    cout<<"the integral sum will be: "<<sum<<endl;

    return 0;
}