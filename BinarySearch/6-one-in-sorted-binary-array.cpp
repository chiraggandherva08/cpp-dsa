#include<iostream>
using namespace std;

int count_ones(int* bArr, int N){
	int low=0, high=N-1;

	while(low <= high){
		int mid = (low + high)/2;

		if(bArr[mid] == 0){
			low = mid + 1;
		}
		else{
			if(mid == 0 && bArr[mid] == 1){
				return N;
			}
			else if(bArr[mid-1] == 0){
				return N - mid;
			}
			else{
				high = mid - 1;
			}
		}
	}
	return 0;
}

int main(){
	int bArr[] = {0, 1, 1, 1, 1, 1, 1, 1, 1};
	int N = sizeof(bArr)/sizeof(int);

	cout << count_ones(bArr, N) << endl;
	return 0;
}
