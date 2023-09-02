#include <iostream>
#include <queue>
using namespace std;

bool isValid(int x, int y, int N, vector<vector<bool>> &visited)
{
    if (x < N && y < N && x >= 0 && y >= 0 && visited[x][y] == false)
    {
        return true;
    }

    return false;
}

int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
{
    int xk = KnightPos[0] - 1, yk = KnightPos[1] - 1;
    int xt = TargetPos[0] - 1, yt = TargetPos[1] - 1;

    vector<vector<bool>> visited(N, vector<bool>(N, false));

    queue<pair<int, int>> q;
    q.push({xk, yk});
    visited[xk][yk] = true;

    int res = 0;

    while (!q.empty())
    {
        int size = q.size();
        res++;

        while (size != 0)
        {
            int xf[] = {-2, -2, -1, -1, 1, 1, 2, 2};
            int yf[] = {-1, 1, -2, 2, -2, 2, -1, 1};

            pair<int, int> p = q.front();
            q.pop();

            int xx = p.first;
            int yy = p.second;

            for (int i = 0; i < 8; i++)
            {
                int nx = xx + xf[i];
                int ny = yy + yf[i];

                if (nx == xt && ny == yt)
                {
                    return res;
                }
                else if (isValid(nx, ny, N, visited))
                {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
            size--;
        }
    }
    return 0;
}

int main()
{
    return 0;
}
