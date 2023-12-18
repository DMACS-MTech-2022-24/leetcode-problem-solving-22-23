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
    bool hasPathSum(TreeNode* root, int targetSum) {
        list<TreeNode*> Q;
        if(root==NULL)
            return false;
        Q.push_back(root);
        while(not Q.empty())
        {
            auto X=Q.front();
            Q.pop_front();
            if(X->left==NULL and X->right==NULL)
            {
                if(X->val==targetSum)
                    return true;
                continue;
            }
            if(X->left!=NULL)
            {
                X->left->val+=X->val;
                Q.push_back(X->left);
            }
            if(X->right!=NULL)
            {
                X->right->val+=X->val;
                Q.push_back(X->right);
            }
        }
        return false;
    }
};