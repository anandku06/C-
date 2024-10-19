#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr){}
};


void preInPostTraversal(TreeNode* root)
{
    vector<int> pre, in, post;
    if(root == nullptr) return;
    stack<pair<TreeNode*, int>> st;
    st.push({root, 1});

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();
    }
    
}