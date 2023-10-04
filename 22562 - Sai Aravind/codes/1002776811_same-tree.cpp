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
        list<pair<TreeNode*,TreeNode*>> Q;
        if(p==q)
            return true;
        else if(p==NULL or q==NULL)
            return false;
        Q.push_back({p,q});
        while(not Q.empty())
        {
            auto t=Q.front();
            Q.pop_front();
            if(t.first->val!=t.second->val
                or (t.first->left!=NULL and t.second->left==NULL)
                or (t.first->left==NULL and t.second->left!=NULL)
                or (t.first->right!=NULL and t.second->right==NULL)
                or (t.first->right==NULL and t.second->right!=NULL)
            )
                return false;
            if(t.first->left!=NULL)
            {
                Q.push_back({t.first->left,t.second->left});
            }
            if(t.first->right!=NULL)
            {
                Q.push_back({t.first->right,t.second->right});
            }
        }
        return true;

    }
};