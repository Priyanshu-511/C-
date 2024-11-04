#include<iostream>
using namespace std;

struct stud{
    int roll;
    stud*befriend;
};

int main(){
    stud s1,s2,s3;
    s1.roll=1;
    s2.roll=2;
    s3.roll=3;

    s1.befriend = &s3;
    s2.befriend = &s1;

    cout<<s1.befriend->roll<<endl;
    cout<<s2.befriend->befriend->roll<<endl;

    return 0;
}