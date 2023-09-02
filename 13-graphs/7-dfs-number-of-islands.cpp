#include <iostream>
using namespace std;

void dfsOfGraph(int v, vector<int> adj[], bool *visited, int s)
{
    visited[s] = true;

    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            dfsOfGraph(v, adj, visited, u);
        }
    }
}

int dfs_number_of_islands(int V, vector<int> adj[])
{
    bool visited[V];
    int count = 0;

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            count++;
            dfsOfGraph(V, adj, visited, 0);
        }
    }
    return count;
}

int main()
{
    return 0;
}
