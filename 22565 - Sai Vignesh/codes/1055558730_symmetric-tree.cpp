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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p && q || !q && p)
            return false;
        // both are not empty
        if(p->val == q->val)
            return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
        else return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        TreeNode* p = root->left,*q = root->right;
        
        return isSameTree(p,q);
        
        
    }
};