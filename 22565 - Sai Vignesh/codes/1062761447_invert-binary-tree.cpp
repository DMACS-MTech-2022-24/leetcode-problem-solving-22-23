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

    TreeNode* invert(TreeNode* curr)
    {
        if(curr==NULL) return NULL;
        TreeNode* tmp = curr->left;
        curr->left = curr->right;
        curr->right = tmp;
        curr->left = invert(curr->left);
        curr->right = invert(curr->right);
        return curr;
    }

    TreeNode* invertTree(TreeNode* root) {
        return invert(root);

    }
};