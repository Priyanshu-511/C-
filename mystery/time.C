#include <iostream>
#include <random>
#include <chrono>

using namespace std;
using namespace std::chrono;
int main() {
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> uni(1, 1000);

    auto start = high_resolution_clock::now();

    for (int i = 0; i < 100; ++i) {
        int random_number = uni(rng);
        cout << random_number << " ";
    }
    cout << endl;

    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
