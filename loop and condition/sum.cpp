#include<iostream>
using namespace std;
int main() {
    int i=0;    char response;

    do{
        int a;
        cout<<"enter the number: "; cin>>a;
        i+=a;

        cout<<"press Y for continue: ";
        cin>>response;
    }
    while(response == 'y');

    cout<<i<<endl;
    return 0;
}