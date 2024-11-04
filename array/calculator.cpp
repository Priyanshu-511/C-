#include<iostream>
using namespace std;
int main() {
    bool cont=true;
    double num1,num2;
    cout<<"enter the number: ";
    cin>>num1;
    while(cont==true){
        char oper; cout<<"enter the operator (+;-;*;/): ";cin>>oper;
        cout<<"enter the next num: "; cin>>num2;
         switch(oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            num1=num1+num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            num1=num1-num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            num1=num1*num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
        num1=num1/num2;
            break;
        case '=':
            cout<<num1;
            cont=false;
            break;
        default:
            cont=false;
            cout << "Error! Invalid operator.";
        }
        cout<<"\n";
    }
    return 0;
}