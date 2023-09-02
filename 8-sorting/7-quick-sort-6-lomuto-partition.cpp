#include <iostream>
using namespace std;

int partition(int* arr, int l, int h)
{
    int i = l-1;
    int last_element = arr[h];

    for(int j = l; j < h; j++)
    {
        if(arr[j] < last_element)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }

    i++;
    swap(arr[i], arr[h]);
    return i;
}

void quick_sort(int* arr, int l, int h)
{
    if(l >= h)
    {
        return;
    }

    int p_index = partition(arr, l, h);

    quick_sort(arr, l, p_index-1);
    quick_sort(arr, p_index+1, h);
}

int main() {
    int arr[] = {-1, 1, -10, 21, 18, 11, 100};
    int N = sizeof(arr)/sizeof(int);

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quick_sort(arr, 0, N-1);

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
