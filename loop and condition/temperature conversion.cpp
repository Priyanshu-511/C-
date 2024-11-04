#include<iostream>
using namespace std;

int main() {
    float cel, fah;
    cout<<"enter the celcius: "; cin>>cel;
    float n; cout<<"maximum value of celcius: "; cin>>n;

    while(cel<=n) {
            fah= ((9*cel/5)+32);
        cout<<"fahrenheit of the given celcius ="<<cel<<" is "<<fah<<"in fahhernheit"<<"\n";
        cel++;
    }
    return 0;
}