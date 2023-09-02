#include <iostream>
using namespace std;

// Time Complexity: O(N * N).
// Aux. Space Complexity: O(1).

// Best Case Time Complexity: O(N*N).
// Unstable.
void selection_sort(int* arr, int N)
{
    for(int i = 0; i < N; i++)
    {
        int smallest_index = i;

        for(int j = i+1; j < N; j++)
        {
            if(arr[j] < arr[smallest_index])
            {
                smallest_index = j;
            }
        }

        swap(arr[i], arr[smallest_index]);
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

    selection_sort(arr, N); // call the selection sort function.

    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
