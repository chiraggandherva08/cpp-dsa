#include<iostream>
using namespace std;

void transpose(vector<vector<int> >& matrix, int n)
{
    int m = matrix[0].size();

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main()
{
    return 0;
}
