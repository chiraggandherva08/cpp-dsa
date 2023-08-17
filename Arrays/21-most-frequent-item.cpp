#include <iostream>
using namespace std;

void printArr(int* arr, int N){
	for(int i=0; i<N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void calculate_prefix_sum(int* freq, int n){
    for(int i=1; i<n; i++){
        freq[i] += freq[i-1];
    }
}

int most_freq(int* s, int* e, int n){
    int freq[101] = {0};

    for(int i=0; i<n; i++){
        freq[s[i]] += 1;
        freq[e[i]] -= 1;
    }

    printArr(freq, 101);
    // calculate_prefix_sum(freq, 101);
    // printArr(freq, 101);

    return 0;
}

int main() {
    int s[] = {1, 2, 4};
    int e[] = {4, 5, 1};

    cout << most_freq(s, e, 3) << endl;
    return 0;
}
