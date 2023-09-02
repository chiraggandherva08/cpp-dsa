#include <iostream>
using namespace std;

#define N 5
long* memo_dp = new long[N];

// Time Complexity: O(N).
// Aux Space Complexity: O(N)-for-dp-array + O(N)-for-function-call-stack.
long long fibo(int n){
    if(n == 0 || n == 1)
        return n;

    if(memo_dp[n] == 0)
        memo_dp[n] = fibo(n-1) + fibo(n-2);

    return memo_dp[n];
}

int main() {
    cout << fibo(N) << endl;
    return 0;
}