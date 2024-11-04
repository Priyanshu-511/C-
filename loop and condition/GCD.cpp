#include<iostream>
using namespace std;

int main() {
    int m,n; cout<<"enter the bigger number: "; cin>>m;
    cout<<"enter the smaller number: "; cin>>n;
    int m1=m; int n1=n;

    while(m%n!=0){
        int rem = m%n;
        m=n;
        n=rem;
    }
    cout<<"the GCD( "<<m1<<" , "<<n1<<" ) is:" <<n<<endl;
}