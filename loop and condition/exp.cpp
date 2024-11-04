#include<iostream>
using namespace std;

int main() {
    float x; cout<<"enter the value of x: "; cin>>x;
    float term=1,sum=1;
    float k=1;
    for(int i=0; i<=20; i++){
    term = term*x/k;
    sum+=term;
    k+=1;
    }
    cout<<"the exponential value is: "<<sum<<endl;
}