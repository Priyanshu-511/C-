#include <iostream>
#include <random>
using namespace std;
int main() {
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> uni(1, 100);

    for (int i = 0; i < 10; ++i) {
        int random_number = uni(rng);
        cout << random_number << " ";
    }
    cout << endl;

    return 0;
}


// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// int main(){
//     srand(time(NULL));
//     for(int i=0; i<10; i++){
//         cout<<rand()<<" ";
//     }
//     return 0;
// }