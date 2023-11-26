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
    bool evaluate(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) {
            if(root->val == 0)
                return false;

            return true;
        }

        bool leftAns = evaluate(root->left);
        bool rightAns = evaluate(root->right);

        if(root->val == 2) {
            bool ans = (leftAns || rightAns);
            return ans;
        }

        return (leftAns && rightAns);
    }

    bool evaluateTree(TreeNode* root) {
        return evaluate(root);
    }
};