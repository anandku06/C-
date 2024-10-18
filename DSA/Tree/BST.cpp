#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr){}
};

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

int main()
{
    TreeNode* root = new TreeNode(20);


    return 0;
}