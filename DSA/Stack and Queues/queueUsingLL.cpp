#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};


class QueueUsingLL
{
    Node* start;
    Node* end;
    int size = 0;

    public:
        void push(int x)
        {
            Node* newNode = new Node(x);
            if(start == nullptr)
            {
                start = newNode;
                end = newNode;
            }

            end->next = newNode;
            end = newNode;
            size++;
        }
};