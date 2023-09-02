#include <iostream>
#include <vector>
using namespace std;

void booleanMatrix(vector<vector<int> > &matrix)
{
    vector<int> rows;
    vector<int> cols;

    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }

    for(int i = 0; i < rows.size(); i++)
        cout << rows[i] << " ";
    cout << endl;

    for(int i = 0; i < cols.size(); i++)
        cout << cols[i] << " ";
    cout << endl;
}

int main()
{
    return 0;
}
