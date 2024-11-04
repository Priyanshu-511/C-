#include<iostream>
#include<cmath>
using namespace std;

int main() {
     int n; cout<<"enter the degree: "; cin>>n;
     int term,sum=0;
    int a,x; cout<<"enter the value of x: "; cin>>x;
     int te1,su1=0;

     for(int i=n; i>=0; i--){
        cout<<"enter the coefficient: ";
        cin>>a;
        term = a*pow(x,i);
        sum+=term;
     }

     int m; cout<<"enter the degree of another polynomial: "; cin>>m;
     int b;
     for(int j=m; j>=0; j--){
        cout<<"enter the coefficient: ";
        cin>>b;
        te1 = b*pow(sum,j);
        su1+=te1;
     }
     cout<<"the composite polynomial is: "<<su1;

     return 0;
}