#include <iostream>
using namespace std;

#define N 7

int nums[] = {2, 8, 3, 9, 6, 5, 4};
int p_sums[N];

void prefix_sum(int* nums){
    int s_;

    for(int i = 0; i < N; i++){
        s_ += nums[i];
        p_sums[i] = s_;
    }
}

int add_from_ranges(int* nums, int l, int r){
    if(l == 0) 
        return p_sums[r];

    return p_sums[r] - p_sums[l-1];
}

int main() {
    prefix_sum(nums);

    cout << add_from_ranges(nums, 1, 3) << endl;
    return 0;
}