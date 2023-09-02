#include<iostream>
using namespace std;

void printArr(int* arr, int N){
	for(int i=0; i<N; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void reverse(int* arr, int l, int h){
	while(l < h){
		swap(arr[h], arr[l]);
		l++;
		h--;
	}
}

// Time Complexity: O(N)
// AUX. Space Complexity: O(1)
void rightRotate_d(int* arr, int k, int n){
	if(k % n == 0) return;
	if(k > n) k = k % n;

	reverse(arr, 0, n-1);
	reverse(arr, 0, k-1);
	reverse(arr, k, n-1);
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	rightRotate_d(arr, 3, 10);
	printArr(arr, 10);
}
