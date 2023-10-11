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
    int sumNumbers(TreeNode* root) {
        vector S={make_pair(root,0)};
        int sum=0;
        while(not S.empty())
        {
            auto [node,val]=S.back();
            val=val*10+node->val;
            S.pop_back();
            if(node->left==node->right)
            {
                sum+=val;
                continue;
            }
            if(node->left)
            {
                S.push_back({node->left,val});
            }
            if(node->right)
            {
                S.push_back({node->right,val});
            }
        }
        return sum;
    }
};