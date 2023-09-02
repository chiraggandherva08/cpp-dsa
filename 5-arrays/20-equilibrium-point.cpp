#include<iostream>
using namespace std;

#define N 6

int nums[] = {3, 4, 8, -9, 9, 7};
int prefix_sum[N];

void get_prefix_sum(int* nums){
	prefix_sum[0] = nums[0];

	for(int i=1; i<N; i++)
		prefix_sum[i] = nums[i] + prefix_sum[i-1];
}

int getSum(int* nums, int l, int r){
	if(l == 0) 
		return prefix_sum[r];
	else
		return prefix_sum[r] - prefix_sum[l-1];
}

int equilibrium_point(int* nums){
	get_prefix_sum(nums);

	for(int i=0; i<N; i++){
		int l_sum, r_sum;

		if(i==0){
			l_sum = 0;
			r_sum = getSum(nums, i+1, N-1);
		} 
		else if(i == N-1){
			l_sum = getSum(nums, 0, i-1);
			r_sum = 0;
		}
		else{
			l_sum = getSum(nums, 0, i-1);
			r_sum = getSum(nums, i+1, N-1);
		}

		if(l_sum == r_sum)
			return i;
	}
	return -1;
}

int main(){
	cout << equilibrium_point(nums) << endl;
	return 0;
}

