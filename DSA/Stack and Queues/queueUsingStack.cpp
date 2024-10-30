#include <bits/stdc++.h>
using namespace std;

class QueueUsingStack
{
    stack<int> s1, s2;

    public:

        void push(int x)
        {
            while (s1.size())       
            {
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(x);
            
            while (s2.size())
            {
                s1.push(s2.top());
                s2.pop();
            }
            
        }
};