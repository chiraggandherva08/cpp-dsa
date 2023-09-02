#include <iostream>
#include <queue>
using namespace std;

void bfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis)
{
    vis[i][j] = 1;
    queue<pair<int, int>> q;
    q.push({i, j});

    int n = grid.size(), m = grid[0].size();

    int dr[] = {-1, 0, 1, 0, -1, 1, 1, -1};
    int dc[] = {0, 1, 0, -1, 1, 1, -1, -1};

    while (!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == '1' && vis[nr][nc] == 0)
            {
                vis[nr][nc] = 1;
                q.push({nr, nc});
            }
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, 0));

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0 && grid[i][j] == '1')
            {
                cnt++;
                bfs(i, j, grid, vis);
            }
        }
    }
    return cnt;
}

int main()
{
    return 0;
}