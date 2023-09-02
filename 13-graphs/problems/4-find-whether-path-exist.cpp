#include <iostream>
#include <queue>
using namespace std;

bool isvalid(int nx, int ny, int n)
{
    if (nx < 0 || ny < 0 || nx >= n || ny >= n)
    {
        return false;
    }
    return true;
}

bool is_Possible(vector<vector<int>> &grid)
{
    int n = grid.size();

    vector<vector<bool>> vis(n, vector<bool>(n, false));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    vis[q.front().first][q.front().second] = false;

    int xs[] = {1, -1, 0, 0};
    int ys[] = {0, 0, 1, -1};

    while (q.empty() == false)
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + xs[i];
            int ny = y + ys[i];

            if (isvalid(nx, ny, n))
            {
                if (grid[nx][ny] == 2)
                {
                    return true;
                }
                else if (grid[nx][ny] == 3 && vis[nx][ny] == false)
                {
                    vis[nx][ny] == 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return false;
}

int main()
{
    return 0;
}