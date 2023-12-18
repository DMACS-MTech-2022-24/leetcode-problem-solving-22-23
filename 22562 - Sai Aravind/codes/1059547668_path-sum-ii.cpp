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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(not root)
            return {};
        vector<vector<int>> out;
        vector Q={make_pair(root,0)};
        vector<int> P;
        int sum=0;
        while(not Q.empty())
        {
            auto &[X,S]=Q.back();
            switch(S++)
            {
                case 0:
                    sum+=X->val;
                    P.push_back(X->val);
                    if(X->left)
                    {
                        Q.push_back({X->left,0});
                    }
                break;
                case 1:
                    if(X->right)
                    {
                        Q.push_back({X->right,0});
                    }
                break;
                case 2:
                    if(X->left==X->right and sum==targetSum)
                    {
                        out.push_back(P);
                    }
                    Q.pop_back();
                    P.pop_back();
                    sum-=X->val;
            }
        }
        return out;
    }
};