#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double x; cout<<"enter the value of x: "; cin>>x;
    double term=1,sum=1;

    for(double i=1; i<=100; i++){
        term*=x/i;
        sum+=term;
    }
    int n;
    cout<<"enter the number till precision: ";cin>>n;
    cout<<fixed<<setprecision(n)<<"expansion of exp("<<x<<") is: "<<"\n";
    cout<<sum<<endl;
}