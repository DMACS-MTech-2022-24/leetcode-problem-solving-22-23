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
        vector<int> out;
        inoT(root,out);
        return out;
    }
    void inoT(TreeNode *root,vector<int> &out)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left!=NULL)
        {
            inoT(root->left,out);
        }
        out.push_back(root->val);
        if(root->right!=NULL)
        {
            inoT(root->right,out);
        }
    }
};