#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    ofstream out("sample.txt");
    out<<str;
}