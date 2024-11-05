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

int main()
{

    return 0;
}