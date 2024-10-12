#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;

    Node(int data) : value(data), next(nullptr){}
};

Node* deleteHead(Node* head)
{
    Node* temp = head;
    if(head == nullptr)
    return head;

    head = head->next;
    delete temp;

    return head;
}

Node* deleteEnd(Node* head)
{
    if(head == nullptr || head->next == nullptr)
    return nullptr;

    Node* temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    
    return head;
}