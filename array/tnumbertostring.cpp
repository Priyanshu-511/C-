#include<iostream>
#include<cstring>
using namespace std;

    string ones[20] = {"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[10] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
string convert(int n, string s){
    string str="";
    if(n > 19){
        str += tens[n/10]+" "+ones[n%10];
    }
    else{
        str += ones[n];
    }

    if(n!=0)
    str+=s;

    return str;
}

string convert(long &m){
    string write;

    write += convert(((m/100000)%10000)," lakhs ");

    write += convert(((m/1000)%100)," thousand ");

    write += convert(((m/100)%10)," hundred ");

    if(m>100 && m%100){
        write+=" and ";
    }
    write+=convert((m%100)," ");

    if (write == ""){
        write+=" zero";
    }

    return write;
}

int main() {
    long k; cout<<"enter the number: "; cin>>k;
cout<<convert(k)<<"\n";
}