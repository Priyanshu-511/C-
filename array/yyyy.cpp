#include <iostream>

using namespace std;

bool leapCheck(int year)
{
    if (year%400==0)
    return true;
    if (year%4==0 && year%100!=0)
    return true;
    return false;
}

int main()
{
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,d,month=1;
    cout<<"Enter a year";
    cin>>year;
    if (leapCheck(year))
    arr[1]=29;
    cout<<"Enter day";
    cin>>d;

    while (d>0)
    {
        int ind=month-1;
        if (d<arr[ind])
        {
            cout<<d<<"/"<<month<<"/"<<year;
            break;
        }
        d-=arr[ind];
        month++;
    }

    return 0;

}