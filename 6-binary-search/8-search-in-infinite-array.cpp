#include<iostream>
using namespace std;

int search_infinite_array(int* nums, int key){
	int s=0, e=1;

	while(s <= e){
		if(nums[e] < key){
			s = e+1;
			e *= 2;
		}
		else{
			int mid = (s + e)/2;
			
			if(nums[mid] < key){
				s = mid + 1;
			}
			else if(nums[mid] > key){
				e = mid - 1;
			}
			else{
				return mid;
			}
		}
	}
	return -1;
}

int main(){
	int N = 12000;
	int nums[N];
	
	for(int o = 0; o < N; o++){
		nums[o] = o;
	}

	cout << search_infinite_array(nums, 12) << endl;
	return 0;
}
