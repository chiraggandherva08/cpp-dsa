#include<iostream>
using namespace std;

void print_graph(vector<int> adj[], int v)
{
    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
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

    print_graph(adj, v);

    return 0;
}

/* OUTPUT:-
    0 -> [1, 2]
    1 -> [0, 2, 3]
    2 -> [0, 1]
    3 -> [1]
*/