/* Problem here is the Space Complexity which is O(n^2)
 as 2D array is used and much space is wasted */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int adjacencyMatrix[n + 1][m + 1];

    // undirected graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }

    // directed graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adjacencyMatrix[u][v] = 1;
    }
    
    return 0;
}