#include <iostream>
#include<vector>
using namespace std;

bool subset_with_sum(int* nums, int index, int sum, int N){
    if(index == N){
        if(sum == 0)
            return true;

        return false;
    }

    bool st1 = subset_with_sum(nums, index+1, sum, N);
    sum = sum - nums[index];
    bool st2 = subset_with_sum(nums, index+1, sum, N);

    return st1 || st2;
}

int main() {
    int nums[] = {10, 20, 30};
    int N = sizeof(nums)/sizeof(int);

    cout << subset_with_sum(nums, 0, 70, N) << endl;
    return 0;
}
