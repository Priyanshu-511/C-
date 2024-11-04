#include<iostream>
using namespace std;

int main() {
    int a,b; cout<<"enter first number: "; cin>>a;
    cout<<"enter the second number: "; cin>>b;
    cout<<"sum of numbers are: "<<a+b<<"\n";
    cout<<"difference of numbers are: "<<a-b<<"also possible: "<<b-a<<"\n";
    cout<<"product of numbers are: "<<a*b<<"\n";
    cout<<"division quotient of numbers are: "<<a/b<<" but there is floor "<<b/a<<"\n";
    cout<<"remainder are: "<<a%b<<" also: "<<b%a<<"\n";
}