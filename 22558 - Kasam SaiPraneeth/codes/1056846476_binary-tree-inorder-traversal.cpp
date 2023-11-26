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
    vector<int> result;
    void tmp(TreeNode *root){
        if(root->left != NULL)
            tmp(root->left);
        result.push_back(root->val);
        if(root->right != NULL)
            tmp(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root){
        if(root == NULL)
            return {};
        tmp(root);
        return result;
    }
};