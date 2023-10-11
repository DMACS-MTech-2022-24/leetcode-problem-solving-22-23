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
            auto tp=S.back();
            S.pop_back();
            swap(tp->left,tp->right);
            if(tp->left)
            {
                S.push_back(tp->left);
            }
            if(tp->right)
            {
                S.push_back(tp->right);
            }
        }
        return root;
    }
};