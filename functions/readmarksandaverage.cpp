#include<iostream>
using namespace std;

void read(int &n){
    int marks;
        int avg;
        int sum=0;
    cout<<"enter the mark: ";
    for(int i=1; i<=n; i++) {
        cin>> marks;
        sum+=marks;
    }
    avg = sum/n;
    cout<<"the average marks will be: "<<avg<<"\n";

    if(avg >=32)
    cout<<"pass"<<"\n";

    else
    cout<<"fail"<<"\n";
}

int main() {
int subject;
cout<<"enter the number of subject: ";
cin>>subject;

cout<<"average marks will be: "; 
    read(subject);
}