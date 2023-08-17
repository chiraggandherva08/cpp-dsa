#include<iostream>
using namespace std;

int buy_sell_stocks(int* arr, int N){
	int profit=0;

	for(int i=0; i<N-1; i++){
		if(arr[i] < arr[i+1]){
			profit += arr[i+1] - arr[i];
		}
	}
	return profit;
}

int main(){
	// failed testcase.
	int arr[] = {
		822, 754, 1689, 305, 214, 782, 1463, 1432, 1382, 1734, 948, 231, 210, 
		1676, 877, 670, 1384, 725, 1370, 412, 724, 371, 928, 358, 533, 1031, 
		850, 1555, 1064, 845, 1692, 514, 630, 1333, 1640, 315, 1639, 1792, 1779, 
		1325, 1619, 1400, 378, 145, 913, 901, 1652, 530, 1259, 880, 303, 685, 1586
	};
	int N = sizeof(arr)/sizeof(int);

	cout << buy_sell_stocks(arr, N) << endl;
	return 0;
}
