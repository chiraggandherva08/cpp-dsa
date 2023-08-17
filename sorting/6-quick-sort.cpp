#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    int count = 0;

    for (int o = start; o <= end; o++)
    {
        if (arr[o] < arr[start])
        {
            count++;
        }
    }

    int pivotIndex = start + count;
    int pivot = arr[start];

    swap(arr[start], arr[pivotIndex]);

    int start_pointer = start;
    int end_pointer = end;

    while (start_pointer < pivotIndex && pivotIndex < end_pointer)
    {
        if (arr[start_pointer] <= pivot)
        {
            start_pointer++;
        }
        else if (pivot <= arr[end_pointer])
        {
            end_pointer--;
        }
        else if (arr[start_pointer] > arr[pivotIndex])
        {
            swap(arr[start_pointer++], arr[end_pointer--]);
        }
    }
    return pivotIndex;
}

// TC : O(N logN)
// TC : O(N logN)
void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // part the array in two parts.
    int pivotIndex = partition(arr, start, end);

    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main()
{
    int arr[] = {-100, 12, 1, 4, 100, 87, 121, 0, -12, 0, 1, 1, 4};
    int N = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, N - 1);
    return 0;
}
