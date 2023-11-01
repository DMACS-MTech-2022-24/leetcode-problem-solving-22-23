/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> order = {};
        stack<TreeNode*> st;
        TreeNode *c = root;

        while(c!=NULL || st.empty() == false)
        {
            while(c!=NULL)
            {
                st.push(c);
                c = c->left;
            }
            c = st.top();
            st.pop();   // may return void, so cant put c = st.pop()
            order.insert(order.end(),c->val);
            c = c->right;
        }    
        return order;    
    }
};