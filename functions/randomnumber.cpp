#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    unsigned int seed; cout<<"any number just for fun: "; cin>>seed;
    int n; cout<<"number of term: "; cin>>n;
    srand(seed);

    for(int i=0; i<n; i++) {
        cout<<rand()<<endl;
    }
    return 0;
}