#include <iostream>
using namespace std;

vector<int> search(vector<vector<int> > matrix, int n, int m, int x)
{
    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (matrix[i][j] < x)
        {
            i++;
        }
        else if (matrix[i][j] > x)
        {
            j--;
        }
        else
        {
            return {i, j};
        }
    }
    return {-1, -1};
}

int main()
{
    return 0;
}
