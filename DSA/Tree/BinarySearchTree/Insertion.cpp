#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

TreeNode *insertInBST(TreeNode *root, int val)
{
    if (root == nullptr)
        return new TreeNode(val);

    TreeNode *temp = root;
    while (true)
    {
        if (temp->data > val)
        {
            if (temp->left != nullptr)
                temp = temp->left;

            else
            {
                temp->left = new TreeNode(val);
                break;
            }
        }
        else
        {
            if (temp->right != nullptr)
                temp = temp->right;

            else
            {
                temp->right = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}
