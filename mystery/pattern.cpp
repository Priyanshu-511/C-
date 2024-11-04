#include<iostream>
using namespace std;
int main() {
        int n; cin>>n;
        for(int i=0; i<2*n; i++){
            for(int j=0; j<2*n; j++){
                if(j/2%2 == i/2%2)
                cout<<"#";
                else
                cout<<".";
            }
            cout<<"\n";
        }
}