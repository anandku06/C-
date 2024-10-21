#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr){}
};

TreeNode* searching(TreeNode* root, int x)
{
    if(root == nullptr || root->data == x)
    {
        return root;
    }

    else if(x > root->data)
    {
        return searching(root->right, x);
    }

    else return searching(root->left, x);
}

TreeNode* insert(TreeNode* root, int val)
{
    if(root == nullptr)
    return new TreeNode(val);

    if(root->data < val)
    insert(root->left, val);

    else
    insert(root->right, val);

    return root;
}

void inOrder(TreeNode* root)
{
    if (root == nullptr) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

TreeNode* findMinimum(TreeNode* root)
{
    if(root == nullptr)
    {
        return nullptr;
    }

    else if(root->left != nullptr)
    {
        return findMinimum(root->left);
    }

    return root;
}
