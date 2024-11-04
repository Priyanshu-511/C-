#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    string str1,str2,strf;
    ifstream stw("sample.txt");
    getline(stw,str1);
    cout<<str1;
    stw.close();
    cout<<"\n\n add something: \n\n";
    getline(cin,str2);

    ofstream sts("sample.txt");
    sts<<str1+str2;
    sts.close();
    ifstream stk("sample.txt");
    getline(stk,strf);

    cout<<"\n\n"<<strf;
    stk.close();
    return 0;
}