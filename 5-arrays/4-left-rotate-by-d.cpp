#include<iostream>
using namespace std;

void reverse(int* arr, int l, int h){
	while(l < h){
		swap(arr[h], arr[l]);
		l++;
		h--;
	}
}

// Time Complexity: O(N)
// AUX. Space Complexity: O(1)
void left_rotate_d_places(int* arr, int k, int s){
	if(k % s == 0) return;
	if(k > s) k = k % s;

	reverse(arr, 0, k-1);
	reverse(arr, k, s-1);
	reverse(arr, 0, s-1);
}

int main(){
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	left_rotate_d_places(nums, 100, 10);
}
