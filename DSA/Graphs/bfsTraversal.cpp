#include <bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int v, vector<int> adj[])
{
    int vis[v] = {0}; // for 0-based indexing
    vis[0] = 1;
    queue<int> q;
    q.push(0);

    vector<int> bfs;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}