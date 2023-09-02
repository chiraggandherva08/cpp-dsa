#include<iostream>
using namespace std;

int josephushelp(int n, int k) {
    if (n == 1) 
        return 0;
    
    return (josephushelp(n-1, k) + k ) % n;
}

int main(){
    cout << josephushelp(10, 2) << endl;
    return 0;
}
