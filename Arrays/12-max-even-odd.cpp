#include<iostream>
using namespace std;

int maxEvenOdd(int* arr, int N){
	int count_max = 1;
	int count_temp = 1;

	for(int i = 0; i < N-1; i++){
		if(arr[i] % 2 == arr[i+1] % 2)
			count_temp = 1;
		else
			count_temp++;

		count_max = max(count_max, count_temp);
	}

	return count_max;
}

int main(){
	int arr[] = {5, 10, 20, 6, 3, 8};
	cout << maxEvenOdd(arr, 6) << endl;
	return 0;
}

