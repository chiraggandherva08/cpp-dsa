#include <iostream>
using namespace std;

void maxDiff(int* arr, int N){
    if(N == 1) return;

    int max_diff = arr[1] - arr[0];
    int min_val = arr[0];

    for(int i=1; i<N; i++){
        max_diff = max(max_diff, arr[i] - min_val);
        min_val = min(arr[i], min_val);
    }
    cout << max_diff << endl;
}

int main() {
    int arr[] = {7};
    maxDiff(arr, 1);
    return 0;
}
