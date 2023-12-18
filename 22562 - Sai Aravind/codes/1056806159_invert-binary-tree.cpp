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
    TreeNode* invertTree(TreeNode* root) {
        if(not root)
            return root;
        vector S={root};
        while(not S.empty())
        {
            auto &nd=S.back();
            auto &l=nd->left,&r=nd->right;
            swap(l,r);
            if(l==r)
                S.pop_back();
            else if(not l)
            {
                nd=r;
            }
            else
            {
                nd=l;
                if(r)
                {
                    S.push_back(r);
                }
            }
        }
        return root;
    }
};