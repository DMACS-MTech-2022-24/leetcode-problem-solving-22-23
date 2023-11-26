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
        // postorder means left,right,root
        // get the left subtree of the current node
        if(root->left != NULL)
            tmp(root->left);
        // then get the right subtree of the root node
        if(root->right != NULL)
            tmp(root->right);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
         // edge case(empty tree)
        if(root == NULL)
            return {};
        tmp(root);
        return result;
    }
};