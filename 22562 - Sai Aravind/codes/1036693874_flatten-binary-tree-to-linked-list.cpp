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
        if(root==NULL)
            return;
        vector<TreeNode*> S={root};
        while(not S.empty())
        {
            auto tp=S.back();
            S.pop_back();
            if(tp->right==NULL)
            {
                tp->right=tp->left;
                tp->left=NULL;
            }
            if(tp->left!=NULL)
            {
                auto it=tp->left;
                for(;it->right!=NULL;it=it->right);
                it->right=tp->right;
                tp->right=tp->left;
                tp->left=NULL;
            }
            if(tp->right!=NULL)
                S.push_back(tp->right);
        }
    }
};