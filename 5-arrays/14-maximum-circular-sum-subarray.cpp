#include<iostream>
using namespace std;

// Naive Approach.
// Time Complexity: O(N^2)
// Aux. Space Complexity: O(1)
int max_circular_subarray_sum(int* nums, int N){
	int result = nums[0];

    for(int i = 0; i < N; i++){
        int curr_sum = nums[i];
        int curr_max = nums[i];

        // Kadane's algorithm.
        for(int j = 1; j < N; j++){
            int index = (i + j) % N;

            curr_sum += nums[index];
            curr_max = max(curr_max, curr_sum);
        }
        result = max(result, curr_max);
    }
	return result;
}

// Efficient Approach
// Time Complexity: O(N)
// Aux. Space Complexity: O(1)
int kadaneAlgorithm(int* arr, int N){
	int max_sum = arr[0];
	int max_temp = arr[0];

	for(int i=1; i<N; i++){
		max_temp = max(arr[i] + max_temp, arr[i]);
		max_sum = max(max_sum, max_temp);
	}

	return max_sum;
}

int max_circular_subarray_sum_efficient(int * nums, int N){
    int normal_max = kadaneAlgorithm(nums, N);
    
    if(normal_max < 0) 
        return normal_max;
    
    int sum = 0;

    for(int i=0; i<N; i++){
        sum += nums[i];
        nums[i] = -nums[i];
    }

    int max_circular_sum = sum + kadaneAlgorithm(nums, N);
    return max(max_circular_sum, normal_max);
}

int main(){
	int nums[] = {-4, -8};
	cout << max_circular_subarray_sum(nums, 2) << endl;
	cout << max_circular_subarray_sum_efficient(nums, 2) << endl;
	return 0;
}