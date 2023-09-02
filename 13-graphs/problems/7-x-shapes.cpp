#include <iostream>
#include <queue>
using namespace std;

bool isvalid(int nx, int ny, int n, int m, vector<vector<bool>> &vis)
{
    if (nx < 0 || ny < 0 || nx > n - 1 || ny > m - 1 || vis[nx][ny] == 1)
    {
        return false;
    }
    return true;
}

void bfs(vector<vector<char>> &grid, int x, int y, vector<vector<bool>> &vis)
{
    int n = grid.size(), m = grid[0].size();

    queue<pair<int, int>> q;
    q.push({x, y});

    vis[x][y] = 1;

    int allx[] = {-1, 1, 0, 0};
    int ally[] = {0, 0, -1, 1};

    while (!q.empty())
    {
        int s = q.size();

        for (int i = 0; i < s; i++)
        {
            int X = q.front().first;
            int Y = q.front().second;
            q.pop();

            for (int j = 0; j < 4; j++)
            {
                int nx = X + allx[j];
                int ny = Y + ally[j];

                if (isvalid(nx, ny, n, m, vis) && grid[nx][ny] == 'X')
                {
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int xShape(vector<vector<char>> &grid)
{
    int n = grid.size(), m = grid[0].size();

    vector<vector<bool>> vis(n, vector<bool>(m, 0));
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'X' && vis[i][j] == 0)
            {
                bfs(grid, i, j, vis);
                res++;
            }
        }
    }

    return res;
}

int main()
{
    return 0;
}