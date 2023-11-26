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
        // if both are empty
        if(p == NULL && q == NULL) return true;

        // if one of them is empty
        if(p == NULL || q == NULL) return false;
        
        // checking if current vals are not same
        if(p->val != q->val)
            return false;

        //then recursively check for left subtree ans right subtree
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};