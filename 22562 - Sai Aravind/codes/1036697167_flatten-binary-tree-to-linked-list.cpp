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
    void flatten(TreeNode* root) {
        for(auto S=root;S!=NULL;S=S->right)
        {
            if(S->right==NULL)
            {
                S->right=S->left;
                S->left=NULL;
            }
            else if(S->left!=NULL)
            {
                auto it=S->left;
                for(;it->right!=NULL;it=it->right);
                it->right=S->right;
                S->right=S->left;
                S->left=NULL;
            }
        }
    }
};