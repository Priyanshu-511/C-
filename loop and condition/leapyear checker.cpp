#include<iostream>
using namespace std;

int main() {
    int n; cout<<"enter the year: "; cin>>n;

    if(n%400 == 0)
    cout<<"it's leap year."<<"\n";

     else if(n%100 == 0)
    cout<<"it's not a leap year"<<"\n";

    else if(n%4==0)
    cout<<"it's a leap year"<<"\t";

    else
    cout<<"it's not leap year."<<"\t";

    return 0;
}