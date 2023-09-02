#include <iostream>
using namespace std;

int minJumps(int arr[], int n)
{
    int currpos = 0;
    int jumps = 0;

    while (currpos < n)
    {
        jumps++;

        int low = currpos + 1;
        int high = currpos + arr[currpos];
        int newpos = low;
        int max = low + arr[low];

        if (arr[currpos] == 0)
        {
            return -1;
        }
        else if (high >= n - 1)
        {
            return jumps;
        }
        else if (low == high)
        {
            currpos++;
            continue;
        }
        for (int j = low; j <= high; j++)
        {
            if (max < j + arr[j])
            {
                max = arr[j] + j;
                newpos = j;
            }
            currpos = newpos;
        }
    }

    return jumps;
}

int main()
{
    return 0;
}