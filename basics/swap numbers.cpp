#include<iostream>
using namespace std;

int main() {
    int a; cout<<"enter the first number" ; cin>>a;
    int b; cout<<"enter the seconnd number: "; cin>>b;
    cout<<"your numbers are: "<<a<<" and "<<b<<"\n";
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"your new numbers are after swapping: "<<a<<" and "<<b<<"\n";
}