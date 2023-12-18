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
            swap(S.back()->left,S.back()->right);
            if(S.back()->left==S.back()->right)
                S.pop_back();
            else if(not S.back()->left)
            {
                S.back()=S.back()->right;
            }
            else
            {
                auto nd=S.back();
                S.back()=S.back()->left;
                if(nd->right)
                {
                    S.push_back(nd->right);
                }
            }
        }
        return root;
    }
};