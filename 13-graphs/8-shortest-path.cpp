#include <iostream>
#include <queue>
using namespace std;

// Time Complexity: O(V + E).
// Aux Space Complexity: O(V).
void shortest_path(vector<int> adj[], int v, int s = 0)
{
    bool visited[v];
    int dist[v];

    for (int i = 0; i < v; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    queue<int> bfs_q;
    bfs_q.push(s);

    visited[s] = true;
    dist[s] = 0;

    while (bfs_q.empty() == false)
    {
        int top = bfs_q.front();
        bfs_q.pop();

        for (int i = 0; i < adj[top].size(); i++)
        {
            int u = adj[top][i];

            if (visited[u] == false)
            {
                visited[u] = true;
                dist[u] = dist[top] + 1;

                bfs_q.push(u);
            }
        }
    }

    for (int i = 0; i < v; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}

void add_edge(vector<int> adj[], int u, int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}

int main()
{
    int v = 4;
    vector<int> adj[v];

    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);

    add_edge(adj, 1, 0);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);

    add_edge(adj, 2, 0);
    add_edge(adj, 2, 1);
    add_edge(adj, 2, 3);

    add_edge(adj, 3, 1);
    add_edge(adj, 3, 2);

    shortest_path(adj, v, 0);

    return 0;
}