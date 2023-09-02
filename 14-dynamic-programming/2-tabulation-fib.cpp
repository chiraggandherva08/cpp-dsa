#include <iostream>
using namespace std;

// Time Complexity: O(N)
// Aux. Space Complexity: O(N)
long long fib(int n){
    long long tab[n+1];

    tab[0] = 0, tab[1] = 1;

    for(int i=2; i <= n; i++){
        tab[i] = tab[i-1] + tab[i-2];
    }

    return tab[n];
}

int main() {
    cout << fib(10) << endl;
    return 0;
}
