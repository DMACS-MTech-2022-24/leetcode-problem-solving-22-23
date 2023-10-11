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
    TreeNode* invertTree(TreeNode* root) {
        //Doing this in postorder traversal
        if(root == NULL) return NULL;

        TreeNode *left, *right;
        // get the leftsub_tree and this becomes the root fot this subtree
        // and simallary for the right_subtree
        left = invertTree(root->left);
        right = invertTree(root->right);
        root->left = right;
        root->right = left;

        return root;
    }
};