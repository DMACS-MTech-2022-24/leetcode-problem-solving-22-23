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
    bool _isValidBST(TreeNode* root, long long int lb, long long int rb)
    {
        if(!root)  return false;

        if(!root->left && !root->right) {
            if(root->val > lb && root->val < rb)
                return true;
            else
                return false;
        }

        bool isValid = true;
        if(root->left){
            if(root->val > lb && root->val < rb){
                isValid = isValid && _isValidBST(root->left, lb, root->val);
            }else
                return false;
        }
        if(root->right){
            if(root->val > lb && root->val < rb){
                isValid = isValid && _isValidBST(root->right, root->val, rb);
            }else
                return false;
        }

        return isValid;


    }
    bool isValidBST(TreeNode* root) {
        return _isValidBST(root, LLONG_MIN, LLONG_MAX);
    }
};