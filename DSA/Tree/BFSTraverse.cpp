#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};


vector<vector<int>> bfsTraversal(TreeNode* root)
{
    vector<vector<int>> res;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty())  
    {
        int size = q.size();
        vector<int> level;

        for(int i = 0; i < size; i++)
        {
            TreeNode* elem = q.front();
            q.pop();

            if(elem->left != nullptr) q.push(elem->left);
            if(elem->right != nullptr) q.push(elem->right);
            level.push_back(elem->val);
        }

        res.push_back(level);
    }
    return res;
}