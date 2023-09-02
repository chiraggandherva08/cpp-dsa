#include <iostream>
using namespace std;

// Naive Approach.
// Time Complexity: O(NK).
// Aux. Space Complexity: O(1).
int max_sum_k_consecutive(int* nums, int N, int k){
    int max_sum = INT_MIN;

    for(int i = 0; i < N - k; i++){
        int tempSum = 0;

        for(int j = i; j < i+k; j++)
            tempSum += nums[j];

        max_sum = max(max_sum, tempSum);
    }
    return max_sum;
}

// Efficient Approach.
// Time Complexity: O(N).
// Aux. Space Complexity: O(1).
//  Sliding Window Technique
int max_sum_k_consecutive_efficient(int* nums, int N, int k){
    int max_sum = 0;
    int curr_sum = 0;

    for(int i=0; i<k; i++){
        max_sum += nums[i];
        curr_sum += nums[i];
    }

    for(int i=k; i<N; i++){
        curr_sum = curr_sum + nums[i] - nums[i - k];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main() {
    int nums[] = {1, 8, 30, -5, 20, 7};
    cout << max_sum_k_consecutive(nums, 6, 3) << endl;
    cout << max_sum_k_consecutive_efficient(nums, 6, 3) << endl;
    return 0;
}