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
        stack<TreeNode*> stk;
        vector<int> out;
        if(root==NULL)
            return out;
        stk.push(root);
        while(!stk.empty())
        {
            TreeNode *cur=stk.top();
            if(cur->left!=NULL)
            {
                stk.push(cur->left);
                cur->left=NULL;
            }
            else
            {
                stk.pop();  
                out.push_back(cur->val);
                if(cur->right!=NULL)
                {
                    stk.push(cur->right);
                    cur->right=NULL;
                }
            }
        }
        return out;
    }
};