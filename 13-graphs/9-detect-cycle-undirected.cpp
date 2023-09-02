#include <iostream>
using namespace std;

// dfs based approach.
bool isCycle(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;

    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            if (isCycle(adj, u, visited, s) == true)
            {
                return true;
            }
        }
        else if (u != parent)
        {
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    bool visited[V];

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            if (isCycle(adj, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    return 0;
}
