#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int side; cout<<"number of sides: "; cin>>side;
    float d;
    float m,n;
    float sum =0;
    float x1=0,y1=0;
    float x2,y2,t1,t2;
    cout<<"enter the x-coordinate: ";cin>>x1;
    cout<<"enter the y-coordinate: ";cin>>y1;
    t1=x1;
    t2=y1;

    for(int i=1; i<side; i++){
        cout<<"enter the x-coordinate: ";cin>>x2;
        cout<<"enter the y-coordinate: ";cin>>y2;
        m = (x2-x1)*(x2-x1);
        n = (y2-y1)*(y2-y1);

        d=sqrt(m+n);
        sum+=d;
        x1=x2;
        y1=y2;
        cout<<"wetted perimeter is: "<<sum<<"\n";
    }
    cout<<"perimeter of curve is: "<<sum+sqrt(float(pow((x2-t1),2)+pow((y2-t2),2)))<<endl;

    return 0;
}