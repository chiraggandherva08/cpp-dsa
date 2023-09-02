#include <iostream>
using namespace std;

bool isCyclic(vector<int> adj[], int s, bool *recstack, bool *vis)
{
    vis[s] = 1;
    recstack[s] = 1;

    for (int u : adj[s])
    {
        if (vis[u] == false && isCyclic(adj, u, recstack, vis) == 1)
        {
            return true;
        }
        else if (recstack[u] == 1)
        {
            return 1;
        }
    }

    recstack[s] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    bool recstack[V], vis[V];

    for (int i = 0; i < V; i++)
    {
        vis[i] = 0;
        recstack[i] = 0;
    }

    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0 && isCyclic(adj, i, recstack, vis))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    return 0;
}
