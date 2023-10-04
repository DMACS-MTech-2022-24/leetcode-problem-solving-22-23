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
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode* out=new TreeNode(),*trav=out;
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
                trav->right=cur;
                trav=trav->right;
                if(cur->right!=NULL)
                {
                    stk.push(cur->right);
                }
            }
        }
        trav=out->right;
        delete out;
        return trav;
    }  
};