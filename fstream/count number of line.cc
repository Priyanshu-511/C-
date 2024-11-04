#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;
    ifstream inpu;
    inpu.open("sample.txt");
    getline(inpu,str);
    inpu.close();
    cout<<str.length()<<"\n";
    return 0;
}