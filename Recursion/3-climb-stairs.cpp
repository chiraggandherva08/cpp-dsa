#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n == 1 || n == 2)
        return n;

    return climbStairs(n-1) + climbStairs(n-2);
}

int main() {
    return 0;
}