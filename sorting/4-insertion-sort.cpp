#include <iostream>
using namespace std;

// Time Complexity: O(N * N).
// Aux. Space Complexity: O(1).

// Best Case Time Complexity: O(N).
// Stable.

// best sorting algorithm for small sized input.
void insertion_sort(int* arr, int N)
{
    for(int i = 1; i < N; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int N = sizeof(arr)/sizeof(int);

    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, N); // call the insertion sort function.

    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
