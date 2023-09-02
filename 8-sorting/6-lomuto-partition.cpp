#include <iostream>
using namespace std;

// Lomuto Partition.
void partition(int* arr, int l, int h)
{
    int i = l - 1;
    int pivot_elem = arr[h];

    for(int j = l; j < h; j++)
    {
        if(pivot_elem > arr[j])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);
}

int main()
{
    int arr[] = {30, 40, 20, 50, 80};
    int N = sizeof(arr)/sizeof(int);

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    partition(arr, 0, N-1);

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
