#include <iostream>
using namespace std;

void frequencies(int* arr, int n){
	for(int i=0; i<n; i++){
		int curr = arr[i];
		int count = 1;

		while(arr[i] == arr[i+1]){
			count++;
			i++;
		}
		cout << arr[i] << " occurrs " << count << " times" << endl;
	}
}

int main() {
	int arr[] = {40, 50, 50, 50};
	frequencies(arr, 4);
    return 0;
}
