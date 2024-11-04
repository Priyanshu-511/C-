#include<iostream>
using namespace std;

int main() {
    int n; cout<<"enter the number: "; cin>>n;
    int i=2;
    bool flag = false;

    while(i<n) {
        if(n%i==0) {
        flag = true;
        break;
        }
        i++;
    }
    if(flag == false)
    cout<<"this is prime number"<<endl;

     else
        cout<<"this is composite number"<<"\n";

    return 0;
}


int main() {
    int n; cout<<"enter the number: "; cin>>n;
    int c=0;

    for(int i=1; i<=n; i++) {
        if(n%i==0){
            c++;
        }
    }
    if(c==2)
    cout<<"this is prime number: "<<endl;

    else
    cout<<"this is composite number: "<<"\n";

    return 0;
}