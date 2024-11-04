#include<iostream>
#include<iomanip>
using namespace std;

class School {
    public:
        string Name;
        string Addre;
        int Roll;
        double Phone;

        void display(void){
            cout<<"stud1ent Name: "<<Name<<"\n"<< "stud1ent roll number: " <<Roll<<"\n"<< "stud1ent Phone number: " <<fixed<<setprecision(2)<<Phone<<"\n"<< "stud1ent Address: " <<Addre<<"\n";
        }
};

int main() {
    School stud1,stud2;

    cout<<"enter the name: ";
    getline(cin,stud1.Name);
    cout<<"Enter the Roll-number: ";
    cin>>stud1.Roll;
    cout<<"Enter the phone number: ";
    cin>>stud1.Phone;
    cin.ignore();
    cout<<"Enter the stdent adress: ";
    getline(cin, stud1.Addre);
    
    cout<<"enter the name: ";
    getline(cin,stud2.Name);
    cout<<"Enter the Roll-number: ";
    cin>>stud2.Roll;
    cout<<"Enter the phone number: ";
    cin>>stud2.Phone;
    cin.ignore();
    cout<<"Enter the stdent adress: ";
    getline(cin, stud2.Addre);
    cout<<"\n";
    stud1.display();
    stud2.display();

    return 0;
}