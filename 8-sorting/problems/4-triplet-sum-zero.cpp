#include <iostream>
using namespace std;

bool findTriplets(int arr[], int n)
{
    sort(arr, arr + n);

    for (int o = 0; o < n; o++)
    {
        int i = o + 1, j = n - 1;

        while (i < j)
        {
            if (arr[o] + arr[i] + arr[j] < 0)
            {
                i++;
            }
            else if (arr[o] + arr[j] + arr[i] > 0)
            {
                j--;
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    return 0;
}
