#include <iostream>
#include <map>
using namespace std;

vector<int> findUnion(int A[], int B[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> res;

    while (i < n && j < m)
    {
        if (i > 0 && j > 0)
        {
            if (A[i] == A[i - 1])
            {
                i++;
                continue;
            }
            else if (B[j] == B[j - 1])
            {
                j++;
                continue;
            }
        }

        else if (A[i] < B[j])
        {
            res.push_back(A[i]);
            i++;
        }
        else if (A[i] > B[j])
        {
            res.push_back(B[j]);
            j++;
        }
        else
        {
            res.push_back(A[i]);
            i++;
            j++;
        }
    }

    while (i < m)
    {
        if (i > 0 && A[i] == A[i - 1])
        {
            i++;
            continue;
        }
        res.push_back(A[i]);
        i++;
    }
    
    while (j < n)
    {
        if (j > 0 && B[j] == B[j - 1])
        {
            j++;
            continue;
        }
        res.push_back(B[j]);
        j++;
    }
    
    return res;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5}, m = 5;
    int B[] = {1, 2, 3}, n = 3;

    vector<int> op = findUnion(A, B, n, m);

    return 0;
}
