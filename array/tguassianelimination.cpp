#include<iostream>
using namespace std;
int main() {
    int n; cout<<"enter the order of matrix: "; cin>>n;
    double a[n][n];
    double b[n][1];
    double x[n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }

    cout<<"enter the constant part: "<<"\n";

    for(int i=0; i<n; i++){
        cin>>b[i][0];
    }

    cout<<"in ordered form: \n"<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<" |"<<" "<<b[i][0]<<"\n";
    }

    //elimination
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            double n2 = a[j][i]/a[i][i];
            for(int k=0; k<n; k++){
                a[j][k] -= n2*a[i][k];
            }
            b[j][0] -= n2* b[i][0];
        }
    }

        cout<<"\nafter elimination: \n"<<"\n";

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<" |"<<" "<<b[i][0]<<"\n";
    }

    cout<<"\n back substitution: \n";
    for(int i=n-1; i>=0; i--){
        double sum =0;
        for(int j=i+1; j<n; j++){
            sum += a[i][j] * x[j];
        }
        x[i] = (b[i][0]-sum) / a[i][i];

        cout<<"\n your solution is \n x"<<i+1<<" is: "<<x[i]<<"\n";
    }

    return 0;
}