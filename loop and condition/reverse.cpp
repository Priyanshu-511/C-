#include<iostream>
using namespace std;

int main(){
    int n; cout<<"enter the number: "; cin>>n;
    int term,sum=0;
    for(int i=0; i<=1000; i++){
        term=n%10;
        sum=sum*10+term;

        if(n/10 == 0)
        break;
        
        n=n/10;
    }
    cout<<"reversed number is: "<<sum<<"\n";

    return 0;
}