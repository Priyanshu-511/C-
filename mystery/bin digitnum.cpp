#include <iostream>
#include <string>

using namespace std;

int maxConsecutiveOnes(int base_10_integer) {
    // Convert the integer to binary
    string binaryRepresentation = "";
    while (base_10_integer > 0) {
        binaryRepresentation = to_string(base_10_integer % 2) + binaryRepresentation;
        base_10_integer /= 2;
    }

    // Count consecutive ones and find the maximum
    int maxConsecutive = 0;
    int currentConsecutive = 0;
    for (char digit : binaryRepresentation) {
        if (digit == '1') {
            currentConsecutive++;
            maxConsecutive = max(maxConsecutive, currentConsecutive);
        } else {
            currentConsecutive = 0; //tagda logic
        }
    }

    return maxConsecutive;
}

int main() {
    int base_10_integer;
    cin >> base_10_integer;

    int result = maxConsecutiveOnes(base_10_integer);
    cout << result << endl;

    return 0;
}