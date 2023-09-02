#include <iostream>
#include <queue>
using namespace std;

int countPaths(int V, vector<int> adj[], int source, int destination)
{
    queue<int> q;
    int paths = 0;

    q.push(source);

    while (q.empty() == false)
    {
        int s = q.size();

        for (int i = 0; i < s; i++)
        {
            int top = q.front();
            q.pop();

            if (top == destination)
            {
                paths++;
            }

            for (int j = 0; j < adj[top].size(); j++)
            {
                q.push(adj[top][j]);
            }
        }
    }

    return paths;
}

int main()
{
    return 0;
}