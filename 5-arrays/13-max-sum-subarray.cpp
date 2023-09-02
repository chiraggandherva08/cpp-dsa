#include<iostream>
using namespace std;

int kadaneAlgorithm(int* arr, int N){
	int max_sum = arr[0];
	int max_temp = arr[0];

	for(int i=1; i<N; i++){
		max_temp = max(arr[i] + max_temp, arr[i]);
		max_sum = max(max_sum, max_temp);
	}

	return max_sum;
}

int main(){
	int arr[] = {-5, 1, -2, 3, -1, 2, -2};
	cout << kadaneAlgorithm(arr, 7) << endl;
	return 0;
}
