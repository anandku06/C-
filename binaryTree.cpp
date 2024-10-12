#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int item;
    Node* left;
    Node* right;

    Node(int x) : item(x), left(nullptr), right(nullptr) {}
};

void inorderTraversal(Node* root)
{
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->item << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root)
{
    if(root == nullptr) return ;
    cout << root->item << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root)
{
    if(root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->item << " ";
}

Node* insertLeft(Node* root, int val)
{
    root->left = new Node(val);
    return root->left;
}

Node* insertRight(Node* root, int val)
{
    root->right = new Node(val);
    return root->right;
}

int main()
{
    Node* root = new Node(1);
    insertLeft(root, 12);
    insertRight(root, 9);


    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    inorderTraversal(root);

    // preorderTraversal(root);
    
    // postorderTraversal(root);

    return 0;
}