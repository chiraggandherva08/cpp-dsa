#include <iostream>
using namespace std;

// via variable sized window.
// window sliding techneque.
// Time Complexity: O(N).
// Aux. Space Complexity: O(1).
int subarray_given_sum(int* nums, int N, int sum){
	int s=0,e=1;
	int curr_sum = nums[0];

	while(s != N-1){
		if(curr_sum < sum){
			curr_sum += nums[e];
			e++;
		}
		else if(curr_sum > sum){
			curr_sum -= nums[s];
			s++;
		}
		else{
            cout << s+1 << ", " << e << endl;
			return curr_sum;
		}
	}
	return -1;
}

int main() {
    int nums[] = {1, 4, 20, 3, 10, 5};
    cout << subarray_given_sum(nums, 6, 18) << endl;

    return 0;
}
