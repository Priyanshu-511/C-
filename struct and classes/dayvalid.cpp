#include <iostream>
using namespace std;

struct checker {
    int day, month, year;
};

bool leap(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return true;
    else
        return false;
}

void check(int day, int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day >= 1 && day <= 31)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    } else if (month == 2) {
        if (leap(year)) {
            if (day >= 1 && day <= 29)
                cout << "true" << endl;
            else
                cout << "false" << endl;
        } else {
            if (day >= 1 && day <= 28)
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
    } else {
        if (day >= 1 && day <= 30)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

int main() {
    checker a;
    a.day = 28;
    a.month = 5;
    a.year = 2006;
    check(a.day, a.month, a.year);

    return 0;
}
