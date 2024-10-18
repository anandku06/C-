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

    else if(root->data < val)
    insert(root->left, val);

    else
    insert(root->right, val);
}

int main()
{
    
    return 0;
}