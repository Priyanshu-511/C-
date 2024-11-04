#include<iostream>
using namespace std;

void prime(int x) {
    int c = 0;
    for(int i=1; i<x; i++){
        if(x%2 == 0){
            c++;
        }
    }

    if(c == 1)
    cout<<"true";

    else
    cout<<"false";

}

int main() {
        int n;
        cout<<"enter the number: "; cin>>n;
        cout<<"is it prime number: ";
        prime(n);

    return 0;
}