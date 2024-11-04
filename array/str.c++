#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char s1[] = "Fun with STL";
	char s2[] = "STL";
	char* p;

	p = strstr(s1, s2);
    

	if (p) {
		cout << s1<<"\n"<<p<<"\n";			//common element
	}
	else {
		cout << "String not found" << endl;
	}

    char str[] = "My name is Ayush";
    char* ch = strchr(str, 'a');		//wher is the element
    cout << ch <<"\n" <<ch - str + 1<<"\n";


    char denom[] = "Rs 10000000";
 
    cout << "The original string is : " << denom;
 
    char first = '1';		//holds entire string after the input number
    char* entire;

    entire = strrchr(denom, first);
 
    cout << "\nThe denomination value is : " << entire;

	return 0;
}
