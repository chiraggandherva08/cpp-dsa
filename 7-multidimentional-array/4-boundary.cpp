#include <iostream>
using namespace std;

void boundaryTraversal(vector<vector<int>> matrix, int n, int m)
{
    if (m == 1)
    {
        for (int i = 0; i < n; i++){
            cout << matrix[i][0] << " ";
        }
        return;
    }
    else if (n == 1)
    {
        for (int i = 0; i < m; i++){
            cout << matrix[0][i] << " ";
        }
        return;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            cout << matrix[0][i] << " ";
        }
        cout << endl;

        for (int i = 1; i < n - 1; i++)
        {
            cout << matrix[i][m - 1] << " ";
        }
        cout << endl;

        for (int i = m - 1; i >= 0; i--)
        {
            cout << matrix[n - 1][i] << " ";
        }
        cout << endl;

        for (int i = n - 2; i >= 1; i--)
        {
            cout << matrix[i][0] << " ";
        }
        cout << endl;
    }
}

int main()
{
    return 0;
}
