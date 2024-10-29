#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x) : data(x), next(nullptr) {}
};

Node *insertAtTheHead(Node *head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    return temp;
}

Node *insertAtTheEnd(Node **head, int val)
{
    Node *newNode = new Node(val);

    if (*head == nullptr)
    {
        *head = newNode;
        return *head;
    }

    Node *temp = *head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return *head;
}
