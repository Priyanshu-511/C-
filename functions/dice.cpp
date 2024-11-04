#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    unsigned int seed; int n; cout<<"enter the number of dice roll: "; cin>>n;
    seed = n;
    srand(seed);
    for(int i=0; i<n; i++) {

        int x= rand()%10;

        if(x<6)
        cout<<x+1<<"\n";

        else
         cout<<10-x<<"\n";
    }

    return 0;
}