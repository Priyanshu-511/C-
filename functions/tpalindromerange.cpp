#include<iostream>
using namespace std;

int ispalin(int a){
    int term=0;
    // for(int i=a; i>0; i/=10) {
    //     term=term*10+i%10;
    // }
    int i=a;
    while(i>0){
        term=term*10+i%10;
        i/=10;
    }

    return (term == a);
}

void loop(int min, int max) {
    for(int i=min; i<=max; i++) {
        if(ispalin(i))
        cout<<i<<" ";
    }
}

int main() {
    int x,y; cout<<"min value: "; cin>>x;
    cout<<"max value: "; cin>>y;

    loop(x,y);
}

