#include <iostream>
using namespace std;

int extreme_indices(int* nums, int key, int N, bool f_occurrence){
	int low = 0, high = N-1;

	while(low <= high){
		int mid = (low + high)/2;
		
		if(nums[mid] < key){
			low = mid + 1;
		}
		else if(nums[mid] > key){
			high = mid - 1;
		}
		else{
			if(f_occurrence){
				if(nums[mid] == nums[mid - 1]){
					high = mid - 1;
				}
				else {
					return mid;
				}
			} 
			else if(!f_occurrence){
				if(nums[mid] == nums[mid + 1]){
					low = mid + 1;
				}
				else{
					return mid;
				}
			}
		}
	}
	return -1;
}

int occurrences(int* nums, int N, int key){
    int first_occurr = extreme_indices(nums, key, N, true);
	
	if(first_occurr == -1){
		return 0;
	}
	
	int last_occurr = extreme_indices(nums, key, N, false);
    return last_occurr - first_occurr + 1;
}

int main() {
	int nums[] = {1, 1, 2, 3, 5, 11, 11, 11, 11, 13, 13, 14, 21, 29, 31, 31, 31};
	int N = sizeof(nums)/sizeof(int);

	cout << occurrences(nums, N, 31) << endl;
    
	return 0;
}
