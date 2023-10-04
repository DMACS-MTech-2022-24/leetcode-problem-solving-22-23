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
    bool isSymmetric(TreeNode* root) {
        list<pair<TreeNode*,TreeNode*>> Q;
        Q.push_back({root,root});
        while(not Q.empty())
        {
            auto tp=Q.front();
            Q.pop_front();
            if(
                (tp.first->left != NULL and tp.second->right==NULL)
                or (tp.first->left == NULL and tp.second->right!=NULL)
                or (tp.first->right != NULL and tp.second->left==NULL)
                or (tp.first->right == NULL and tp.second->left!=NULL)
                or (tp.first->right != NULL and tp.second->left->val!=tp.first->right->val)
                or (tp.first->left != NULL and tp.second->right->val!=tp.first->left->val)
            )
                return false;
            if(tp.first->right!=NULL)
                Q.push_back({tp.first->right,tp.second->left});
            if(tp.first->left!=NULL)
                Q.push_back({tp.first->left,tp.second->right});
        }
        return true;
    }
};