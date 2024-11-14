#include <bits/stdc++.h>
#define nV 4
#define INF 999
using namespace std;

void printMatrix(int matrix[nV][nV]);

void floydWarshall(int graph[nV][nV])
{
    int matrix[nV][nV], i, j, k;

    for (int i = 0; i < nV; i++)
    {
        for (int j = 0; j < nV; j++)
        {
            matrix[i][j] = graph[i][j];
        }
    }

    for (int k = 0; k < nV; k++)
    {
        for (int i = 0; i < nV; i++)
        {
            for (int j = 0; j < nV; j++)
            {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }

    printMatrix(matrix);
}

int main()
{

    return 0;
}