#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int k = 0; k < t; ++k) {
        int n;
        cin >> n;

        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                if(j%2!=0){
                    if(i-j==0 || i-j==1)
                    cout<<"#";
                    else
                    cout<<".";
                }
                else{
                    if(i-j==-1||i-j==0){
                        cout<<"#";
                    }
                    else
                    cout<<".";
                }
            }
            cout << endl;
        }

        if (k != t - 1)
            cout << endl;
    }

    return 0;
}