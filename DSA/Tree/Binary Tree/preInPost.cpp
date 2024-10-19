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

        if(it.second == 1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != nullptr)
            st.push({it.first->left, 1});
        }

        else if(it.second == 2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != nullptr)
            st.push({it.first->right, 1});
        }
        
        else post.push_back(it.first->data);
    }
    
}