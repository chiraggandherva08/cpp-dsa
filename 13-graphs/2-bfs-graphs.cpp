#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Time Complexity: O(V+E) {Vertices and Edges}.
// Aux. Space Complexity: 
void bfs(vector<int > adj_list[], int v, int s)
{
    bool visited[v];

    for(int i = 0; i < v; i++)
    {
        visited[v] = false;
    }

    queue<int> bfs_q;
    visited[s] = true;

    bfs_q.push(s);

    while(bfs_q.empty() == false)
    {
        int top = bfs_q.front();
        cout << top << " ";

        bfs_q.pop();

        for(int i: adj_list[top])
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                bfs_q.push(i);
            }
        }
    }
    return;
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
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);

    bfs(adj, v, 2);

    return 0;
}
