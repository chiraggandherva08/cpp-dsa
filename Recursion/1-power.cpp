#include <iostream>
using namespace std;

// TC: O(log N).
int power_withLogN(int exponent, int power) {
    if (power == 0)
        return 1;

    int pow = power_withLogN(exponent, power / 2);

    if (power % 2 == 0)
        return pow * pow;
    else
        return exponent * pow * pow;
}

int main() {
    return 0;
}
