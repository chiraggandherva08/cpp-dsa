#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nums[] = {1, 2, -1, 100, 15, 20, 11, -21, 32, 92, 101};
    vector<int> v;
    int N = sizeof(nums)/sizeof(int);

    // for sorting in increasing order.
    sort(nums, nums+N);

    // for sorting in decreasing order.
    sort(nums, nums+N, greater<int>());

    // for sorting a vector.
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>());

    return 0;
}
