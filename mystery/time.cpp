#include<iostream>
#include<chrono>
#include<iomanip>
using namespace std;
using namespace std::chrono;

int main(){
    const long double g = 1.0;
    long double start = g * high_resolution_clock::now();
    for(int i=0; i<2*100; i++){
        for(int j=0; j<2*100; j++){
            if(i/2%2 == j/2%2){
                cout<<"#";
            }
            else cout<<".";
        }
        cout<<"\n";
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken: " << duration.count() << " microseconds" << endl;
    return 0;
}