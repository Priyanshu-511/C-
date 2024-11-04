#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Invalid operator.";
    }

    return 0;
}
