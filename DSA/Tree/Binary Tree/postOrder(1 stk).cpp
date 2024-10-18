#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : data(x), left(nullptr), right(nullptr){}
};

vector<int> postOrderTraversal(TreeNode* root)
{
    vector<int> postorder;
    if(root == nullptr) return postorder;

    stack<TreeNode*> st;
    TreeNode* curr = root;
    TreeNode* temp;

    while (curr != nullptr || !st.empty())
    {
        if(curr != nullptr)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            temp = st.top()->right;
            if(temp == nullptr)
            {
                temp = st.top();
                st.pop();
                postorder.push_back(temp->data);

                while (!st.empty() && temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
                
            }
            else curr = temp;
        }
    }
    
    return postorder;
}
