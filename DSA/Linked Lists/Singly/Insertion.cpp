#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr){}
};

Node* insertAtTheHead(Node* head, int val)
{
    Node* temp = new Node(val);
    temp->next = head;
    return temp;
}
