#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* temp) : data(x), next(temp) {}
};

Node *insertAtTheHead(Node *head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    return temp;
}

Node *insertAtTheEnd(Node *head, int val)
{
    Node *newNode = new Node(val);

    if (head == nullptr)
    {
        return new Node(val, head);
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

Node* insertAtK(Node* head, int val, int k)
{
    Node* newNode = new Node(val);
    if(head == nullptr) return newNode;

    if(k == 1)
    {
        newNode->next = head->next;
        head->next = newNode;
        return head;
    }

    Node* temp = head;
    for (int i = 1; i < k-1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
}