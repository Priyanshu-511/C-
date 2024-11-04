#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream of;
    string str,str2;
    of.open("sample.txt");
    while(!of.eof()){
        getline(of,str);
    }
    cout<<str;
    of.close();
    cout<<"\n\n Enter any changes \n be careful , you must have to type every word till end \n\n";
    getline(cin,str2);
    ofstream ok;
    ok.open("sample.txt");
    ok<<str2;
    ok.close();
    return 0;
}