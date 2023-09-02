#include <iostream>
#include <queue>
using namespace std;

int orangesRotting(vector<vector<int> > &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    int vis[n][m];

    int freshCount = 0;
    int minTime = 0;

    queue<pair<pair<int, int>, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (grid[i][j] == 2)
            {

                q.push({{i, j}, 0});

                vis[i][j] = 1;
            }
            else
            {
                vis[i][j] = 0;
            }

            if (grid[i][j] == 1)
            {
                freshCount++;
            }
        }
    }

    int row[] = {-1, 0, 1, 0};
    int col[] = {0, 1, 0, -1};

    int count = 0;

    while (!q.empty())
    {

        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;

        q.pop();

        minTime = max(minTime, t);

        for (int i = 0; i < 4; i++)
        {

            int nrow = r + row[i];
            int ncol = c + col[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1)
            {

                q.push({{nrow, ncol}, t + 1});

                vis[nrow][ncol] = 1;

                count++;
            }
        }
    }

    if (count != freshCount)
    {
        return -1;
    }

    return minTime;
}

int main()
{
    return 0;
}
