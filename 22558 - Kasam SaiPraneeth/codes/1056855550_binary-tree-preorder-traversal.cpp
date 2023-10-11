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
        // preorder means root,left,right
        // push the root node val first
        result.push_back(root->val);
        // get the left subtree of the current node
        if(root->left != NULL)
            tmp(root->left);
        // once the left node of the current node is Null push the left node into the vector
        // then get the right subtree of the root node
        if(root->right != NULL)
            tmp(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
      // edge case(empty tree)
        if(root == NULL)
            return {};
        tmp(root);
        return result;  
    }
};