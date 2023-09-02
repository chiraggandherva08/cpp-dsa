#include <iostream>
using namespace std;

void dfsOfGraph(int v, vector<int> adj[], bool *visited, int s)
{
    visited[s] = true;
    cout << s << " ";

    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            dfsOfGraph(v, adj, visited, u);
        }
    }
}

void dfsOfGraph(int V, vector<int> adj[])
{
    bool visited[V];

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for(int i = 0; i < V; i++)
    {
        if(visited[i] == false)
        {
            dfsOfGraph(V, adj, visited, 0);
        }
    }
}

int main()
{
    return 0;
}
