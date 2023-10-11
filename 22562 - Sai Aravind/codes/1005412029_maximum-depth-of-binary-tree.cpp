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
    int maxDepth(TreeNode* root) {
        vector<TreeNode*> S;
        if(root==NULL)
            return 0;
        root->val=1;
        int max_depth=1;
        S.push_back(root);
        while(not S.empty())
        {
            auto tp=S.back();
            S.pop_back();
            const auto depth=tp->val+1;
            if(tp->left!=NULL)
            {
                tp->left->val=depth;
                S.push_back(tp->left);
            }
            if(tp->right!=NULL)
            {
                tp->right->val=depth;
                S.push_back(tp->right);
            }
            if(tp->left==NULL and tp->right==NULL and max_depth<tp->val)
                max_depth=tp->val;
        }
        return max_depth;
    }
};