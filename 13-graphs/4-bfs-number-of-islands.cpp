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

        for(int i = 0; i < adj_list[top].size(); i++)
        {
            int v = adj_list[top][i];
            if(visited[v] == false)
            {
                visited[v] = true;
                bfs_q.push(v);
            }
        }
    }
}

int bfs_islands(vector<int> adj_list[], int v)
{
    bool visited[v + 1];
    int count = 0;

    for(int i = 0; i < v; i++)
        visited[i] = false;

    for(int i = 0; i < v; i++)
    {
        if(visited[i] == false)
        {
            count++;
            bfs(adj_list, v, i, visited);
        }
    }
    return count;
}

void add_edge(vector<int> adj_list[], int u, int v)
{
    adj_list[v].push_back(u);    
    adj_list[u].push_back(v);    
}

int main()
{
    int v = 4;
    vector<int> adj_list[v];

    add_edge(adj_list, 0, 1);
    add_edge(adj_list, 0, 2);
    add_edge(adj_list, 1, 2);
    add_edge(adj_list, 1, 3);

    cout << bfs_islands(adj_list, v) << endl;

    return 0;
}
