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

 // 2 represents OR and 3 represents AND
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->val==0 || root->val==1) return root->val;

        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        root->left = NULL; root->right = NULL;
        if(root->val==2) return left||right;
        return left&&right; // sure that the value will be 3
        
    }
};