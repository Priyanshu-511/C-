#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n; cout<<"enter the number of element: "; cin>>n;
    vector<int> arr(n);
    int st=0, end=n-1;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=st; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr.begin(),arr.end());

    for(int i=st; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int fn; cout<<"enter the value to be find: "; cin>>fn;

    while(st<=end) {
        int mid = (st+end)/2;
        int mval = arr[mid];
        if(fn == mval){
        cout<<"found at: "<<mid<<endl;
        return 0;
        }

        else if(fn>mval)
        st=mid+1;

        else
        end=mid-1;
    }

    cout<<"not any element match to it"<<"\n";

    return 0;
}