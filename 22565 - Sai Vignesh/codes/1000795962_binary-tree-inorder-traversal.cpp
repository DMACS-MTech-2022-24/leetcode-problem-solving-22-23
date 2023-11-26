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

        while(true)
        {
            if(c!=NULL)
            {
                st.push(c);
                c = c->left;
            }
            else{
                if(st.empty()) break;

            c = st.top();
            st.pop();   // may return void, so cant put c = st.pop()
            order.push_back(c->val);
            c = c->right;
            }
        }    
        return order;    
    }
};