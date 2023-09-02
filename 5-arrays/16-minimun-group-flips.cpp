#include<iostream>
using namespace std;

void printArr(int* arr, int N){
	for(int i=0; i<N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void min_group_flips(int* bNums, int N){
	bool is_flip_zeros = true;
	
	if(bNums[0] == bNums[N-1])
		if(bNums[0] == 0){ is_flip_zeros = false; }
	
	for(int i=0; i<N; i++){
		if(is_flip_zeros){
			if(bNums[i] == 0){ bNums[i] = 1; }
		} 
		else { 
			if(bNums[i] == 1){ bNums[i] = 0; }
		}
	}
}

int main(){
	int bNums[] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1};
	printArr(bNums, 11);
	min_group_flips(bNums, 11);
	printArr(bNums, 11);
	return 0;
}