#include <iostream>
using namespace std;

long merge(long* arr, long start, long end)
{
    long mid = start - (end - start)/2;

    long len1 = mid - start + 1, len2 = end - mid;
    long arr1[len1], arr2[len2];

    for(int i = 0; i < mid + 1; i++)
    {
        arr1[i] = arr[start + i];
    }

    for(int i = 0; i < end; i++)
    {
        arr2[i] = arr[mid + i + 1];
    }

    long index_1 = 0, index_2 = 0, main_index = start;
    long res = 0;

    while(index_1 < len1 && index_2 < len2)
    {
        if(arr1[index_1] < arr2[index_2])
        {
            arr[main_index] = arr1[index_1];
            index_1++;
        }
        else
        {
            arr[main_index] = arr2[index_2];
            index_2++;
            res += len1 - index_1;
        }
        main_index++;
    }

    while(index_1 < len1)
    {
        arr[main_index] = arr1[index_1];
        index_1++;
        main_index++;
    }

    while(index_2 < len2)
    {
        arr[main_index] = arr2[index_2];
        index_2++;
        main_index++;
    }

    return res;
}

long merge_sort(long* arr, long s, long e)
{  
    int res = 0;

    if(s >= e)
    {
        return res;
    }

    long m = s - (e - s)/2;

    res += merge_sort(arr, s, m);
    res += merge_sort(arr, m+1, e);

    res += merge(arr, s, e);

    return res;
}

int main() {
    long N = 5, arr[] = {2, 4, 1, 3, 5};

    cout << merge_sort(arr, 0, N-1) << endl;
    return 0;
}
