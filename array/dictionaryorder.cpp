#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int n; cout<<"enter the number of element: "; cin>>n;
    string name[n];

    for(int i=0; i<n; i++) {
        getline(cin, name[i]);      //only string act in it
    }

    for(int i=0; i<n-1; ++i) {
        for(int j=0; j<n-1; ++j) {
            if(name[j+1]<name[j]){
                swap(name[j],name[j+1]);
            }
        }
    }
    cout<<"\n"<<"\t";
     cout<<"arranged in lexicographical order: "<<"\n";
    for(int i=0; i<n; i++){
        cout<<name[i]<<"\n";
    }
    return 0;
}