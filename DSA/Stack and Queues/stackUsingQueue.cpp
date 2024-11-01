#include <bits/stdc++.h>
using namespace std;

class StackUsingQueue
{
    queue<int> q;

    void push(int x)
    {
        int s = q.size();
        q.push(x);

        for (int i = 0; i < s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
};