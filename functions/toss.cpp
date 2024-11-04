#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    unsigned int seed;
    int n; cout<<"enter the number of toss: "; cin>>n;
    seed=n;
    srand(seed);

    for(int i=1; i<=n; i++) {
        if(rand()%2==0)
        cout<<"tails"<<"\n";

        else
        cout<<"heads"<<"\n";
    }
    return 0;
}