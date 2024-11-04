#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char str1[25], str2[20]; //define string

   cin.getline(str1,25); //input of string without looping
   cin.getline(str2,20);

    // for(int i=0; i<25; i++){
    //     cin>>str2[25];          //input of string with loop
    // }

    cout<<str1<<endl;           //complete output due to cin.getline
    cout<<str2<<endl;           //something weird complete output

    if(strcmp(str1,str2)!=0)        //comparing string
    cout<<"these are different string: "<<"\n";

    else
    cout<<"same string: "<<"\n";

    strcat(str2,str1);  //here string will concatenate means str1 text is get merge to str2 text
    cout<<str1<<"\n"<<str2<<"\n";

    strcpy(str1,str2);      //copy string
    cout<<str1<<"\n"<<str2<<"\n";

    cout<<"length of string 2: "<<strlen(str1)<<"\n"<<"length of string 2: "<<strlen(str2)<<"\n";   //length of string
    /*c++ calls NUL (='\0)*/
}