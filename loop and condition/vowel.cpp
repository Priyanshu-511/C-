#include<iostream>
using namespace std;

int main(){
    char temp; cout<<"enter the input: "; cin>>temp;
    char it=(temp == 'a'|| temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' || temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U');

    if(!isalpha(temp)) {
        cout<<"error! this is not alphabet"<<endl;
    }
    else if (it) {
        cout<<"this is vowel"<<"\n";
    }
    else {
        cout<<"this is consonent"<<"\n";
    }
    cout<<endl;
    return 0;
}