#include <iostream>
using namespace std;

// Time Complexity: O(N * N).
// Aux. Space Complexity: O(1).

// Best Case Time Complexity: O(N).
// Stable.
void bubble_sort(int* arr, int N)
{
    for(int i = 0; i < N-1; i++)
    {
        bool is_sorted = true;
        
        for(int j = 0; j < N-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                is_sorted = false;
                swap(arr[j], arr[j+1]);
            }
        }
        
        if(is_sorted)
        {
            return;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int N = sizeof(arr)/sizeof(int);

    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, N); // call the bubble sort function.

    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}