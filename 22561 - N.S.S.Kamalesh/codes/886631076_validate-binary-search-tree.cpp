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
    vector<int>v;
    void inorder(TreeNode *root){
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return is_sorted(v.begin(),v.end())&(unique(v.begin(),v.end())==v.end());
    }
};