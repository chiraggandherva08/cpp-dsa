#include <iostream>
using namespace std;

int maxConsecutiveOnes(int* arr, int N){
	int i=0;
	int max_count = 0;
    int curr = 0;

    for(int i=0; i<N; i++){
        if(arr[i] == 1)
            curr++;
        else 
            curr = 0;

        max_count = max(max_count, curr);
    }
	return max_count;
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 1, 1};
    cout << maxConsecutiveOnes(arr, 7) << endl;
    return 0;
}
