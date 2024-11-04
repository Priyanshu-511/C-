#include<iostream>
#include<cmath>
using namespace std;
 int main() {
    float x; cout<<"enter the value: "; cin>>x;
    float term ,sum=0;
    
    for(float i=1; i<=100; i++) {
        term=pow(((x-1)/(x+1)),2*i-1);
        sum=sum-term*(pow(-1,2*i-1))/(2*i-1);
    }
    cout<<"value of ln("<<x<<") is: "<<2*sum<<"\n";
    cout<<"value of log("<<x<<") is: "<<2*sum/2.30258509<<"\n";
 }