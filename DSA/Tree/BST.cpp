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

TreeNode* deletion(TreeNode* root, int x)
{
    if(root == nullptr)
    {
        return nullptr;
    }

    if(x > root->data)
    {
        root->right =  deletion(root->right, x);
    }

    else if(x < root->data)
    {
        root->left = deletion(root->left, x);
    }

    else
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }

        else if(root->left == nullptr || root->right == nullptr)
        {
            TreeNode* temp;
            if(root->left == nullptr)
            {
                temp = root->right;
            }
            else temp = root->left;

            delete root;
            return temp;
        }

        else
        {
            TreeNode* temp = findMinimum(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }

    return root;
}