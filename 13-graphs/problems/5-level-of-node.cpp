#include <iostream>
#include <queue>
using namespace std;

int nodeLevel(int V, vector<int> adj[], int X)
{
    int l = 0;
    bool vis[V + 1];

    for (int i = 0; i <= V; i++)
    {
        vis[i] = false;
    }

    queue<int> q;
    vis[0] = true;
    q.push(0);

    while (q.empty() == false)
    {
        int s = q.size();

        for (int j = 0; j < s; j++)
        {
            int u = q.front();
            q.pop();

            if (u == X)
            {
                return l;
            }

            for (int i = 0; i < adj[u].size(); i++)
            {
                int n = adj[u][i];

                if (vis[n] == false)
                {
                    vis[n] = true;
                    q.push(n);
                }
            }
        }
        l++;
    }
    return -1;
}

int main()
{
    return 0;
}