#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
    int height;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr), height(1) {}
};

int max(int ,int);

int height(TreeNode* Tn)
{
    if(Tn == nullptr) return 0;

    return Tn->height;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

TreeNode* rightRotate()
{}

TreeNode* leftRotate()
{}

TreeNode* insertNode(TreeNode* node, int key)
{
    if(node == nullptr) return new TreeNode(key);

    if(key < node->data)
    node->left = insertNode(node->left, key);

    else if(key > node->data)
    node->right = insertNode(node->right, key);

    else return node;

    node->height = 1 + max(height(node->left), height(node->right));
    int balance = getBalance(node);

    if(balance > 1 && key < node->left->data) return rightRotate(node);

    if(balance < -1 && key > node->right->data) return leftRotate(node);

    if(balance > 1 && key > node->left->data)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if(balance < -1 && key < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

TreeNode* minValueNode(TreeNode* node)
{
    TreeNode* curr = node;

    while (curr->left != nullptr)
    {
        curr = curr->left;
    }
    
    return curr;
}

int main()
{
    
    return 0;
}