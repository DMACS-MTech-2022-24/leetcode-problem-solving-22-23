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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==root2)
            return nullptr;
        else if(root1 and root2)
        {
            auto &l1=root1->left,&r1=root1->right,&l2=root2->left,&r2=root2->right;
            root1->val+=root2->val;
            l1=mergeTrees(l1,l2);
            r1=mergeTrees(r1,r2);
            return root1;
        }
        else if(root2)
        {
            return root2;
        }
        return root1;
    }
};