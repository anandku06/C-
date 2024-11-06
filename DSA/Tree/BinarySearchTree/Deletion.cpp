#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

TreeNode *helper(TreeNode *);
TreeNode *findLastChild(TreeNode *);

TreeNode *deletionInBST(TreeNode *root, int key)
{
    if (root == nullptr)
        return nullptr;

    if (root->data == key)
        return helper(root);

    TreeNode *temp = root;
    while (temp != nullptr)
    {
        if (key < temp->data)
        {
            if (temp->left != nullptr && temp->left->data == key)
            {
                temp->left = helper(temp->left);
                break;
            }
            else
                temp = temp->left;
        }
        else
        {
            if (temp->right != nullptr && temp->right->data == key)
            {
                temp->right = helper(temp->right);
                break;
            }
            else
                temp = temp->right;
        }
    }

    return root;
}

TreeNode* helper(TreeNode* root)
{
    if(root->left == nullptr)
    return root->right;

    else if(root->right == nullptr)
    return root->left;

    TreeNode* rightChild = root->right;
    TreeNode* lastChild = findLastChild(root->left);
    lastChild->right = rightChild;

    return root->left;
}

TreeNode* findLastChild(TreeNode* root)
{
    if(root->right == nullptr)
    return root;

    return findLastChild(root->right);
}

int main()
{

    return 0;
}