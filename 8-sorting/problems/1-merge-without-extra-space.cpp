#include <iostream>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int i = 0, j = n - 1, k = 0;

    // arr1[] -> i, j
    // arr2[] -> k

    while (k < m && j >= 0)
    {
        if (arr1[j] > arr2[k])
        {
            swap(arr1[j], arr2[k]);
            k++;
            j--;
        }
        else
        {
            j--;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    long long arr1[] = {1, 3, 5, 7};
    int n = 4;

    long long arr2[] = {0, 2, 6, 8, 9};
    int m = 5;

    merge(arr1, arr2, n, m);

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
