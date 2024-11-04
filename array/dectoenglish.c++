#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string ones[21][100] = {"","zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[10][100] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

    int n; cout<<"enter the number in integer: "; cin>>n;

    if(n>=1000){

    }
    else if(n>=100){
        if(n%100>19){
            cout<<ones[n/100]<<" hundred "<<"and "<<tens[(n%100)/10]<<" "<<ones[n%10];
        }
        else{
            cout<<ones[n/100]<<" hundred "<<"and "<<ones[(n%100)];
        }
    }
    else if(n>=20){
        cout<<tens[n/10]<<" "<<ones[n%10];
    }
    else{
        cout<<ones[n+1];
    }

    return 0;
}