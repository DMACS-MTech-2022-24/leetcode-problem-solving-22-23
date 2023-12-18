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
    int getMinimumDifference(TreeNode* root) {
        list<TreeNode*> Q;
        int m=1<<20;
        Q.push_back(root);
        while(not Q.empty() and m>0)
        {
            auto X=Q.front();
            Q.pop_front();
            if(X->left!=NULL)
            {
                auto it=X->left;
                for(;it->right!=NULL;it=it->right);
                Q.push_back(X->left);
                auto dif=X->val-it->val;
                if(dif<m)
                    m=dif;
            }
            if(X->right!=NULL)
            {
                auto it=X->right;
                for(;it->left!=NULL;it=it->left);
                auto dif=it->val-X->val;
                Q.push_back(X->right);
                if(dif<m)
                    m=dif;
            }
        }
        return m;
    }
};