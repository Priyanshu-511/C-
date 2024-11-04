#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a,n; cout<<"enter the starting number: "; cin>>a;
    cout<<"enter the maximum number: "; cin>>n;

    for(int i=a; i<=n; i++){

           bool c=true;

        for(int j=2; j<=sqrt(i); j++){
            if(i%j == 0){
                c=false;
                break;
            }
        }
        if(c == true)
        cout<<i<<endl;
    }

    return 0;
}

int main() {
    int a; cout<<"enter the starting value: "; cin>>a;
    int max; cout<<"maximum value: "; cin>>max;

    while(a<=max){
        int c=0;
        int j=2;
        while(j<=sqrt(a)) {
            if(a%j==0){
                c++;
            }
            j++;
        }
        if(c==0)
        cout<<a<<endl;

        a++;
    }
    return 0;
}