#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n; cout<<"enter the number: "; cin>>n;
    int temp,term,sum=0;
      temp = n;

    for(int i=0; i<=10000; i++) {
        term=n%10;
        sum=sum*10+term;

        if(n/10 == 0)
        break;

        n=n/10;
    }
    if (sum == temp)
    cout<<"this number is palindrome: "<<"\n";

    else
    cout<<"it is not a palindrome: "<<"\n";

    return 0;
}