#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<int> adj_list[], int v, int s, bool* visited)
{
    queue<int> bfs_q;
    bfs_q.push(s);

    visited[s] = true;

    while(bfs_q.empty() == false)
    {
        int top = bfs_q.front();
        bfs_q.pop();

        cout << top << " ";

        for(int v: adj_list[top])
        {
            if(visited[v] == false)
            {
                visited[v] = true;
                bfs_q.push(v);
            }
        }
    }
}

void bfs_disconnected(vector<int> adj_list[], int v)
{
    bool visited[v + 1];

    for(int i = 0; i < v; i++)
        visited[i] = false;

    for(int i = 0; i < v; i++)
    {
        if(visited[i] == false)
        {
            visited[i] = true;
            bfs(adj_list, v, i, visited);
        }
    }
}

void add_edge(vector<int> adj_list[], int u, int v)
{
    adj_list[v].push_back(u);    
    adj_list[u].push_back(v);    
}

int main()
{
    
    return 0;
}