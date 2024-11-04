#include<iostream>
using namespace std;

int main() {
    int n; cout<<"enter the number of points: "; cin>>n;
    float x[n],y[n];

    for(int i=0;i<n;i++){
        cout<<"enter the x-coordinate: "; cin>>x[i];
        cout<<"enter the y-coordinate: "; cin>>y[i];
    }
    float slope1,slope2;
    for(int p=0; p<n; p++) {
    for(int j=0; j<n; j++) {
        for(int m=0; m<n; m++){
        slope1 = ((y[j]-y[j+p])/x[j]-x[j+p]);
        slope2 = ((y[j]-y[j+p+1])/x[j]-x[j+p+1]);
    }
    
        if(slope1 == slope2) {
        cout<<"points: "<<"("<<x[j]<<","<<y[j]<<")"<<endl;
        cout<<"points: "<<"("<<x[j+p]<<","<<y[j+p]<<")"<<endl;
        cout<<"points: "<<"("<<x[j+p+1]<<","<<y[j+p+1]<<")"<<endl;
        cout<<"are colinear: "<<endl;
        break;
        }

        else {
            cout<<"not collinear: "<<endl;
        }
    }
    }
    return 0;
}
