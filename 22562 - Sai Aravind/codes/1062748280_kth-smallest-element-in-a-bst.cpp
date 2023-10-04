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
    int kthSmallest(TreeNode* root, int k) {
        vector S={make_pair(root,0)};
        while(not S.empty())
        {
            auto &[nd,st] = S.back();
            switch(st++)   
            {
                case 0:
                    if(nd->left)
                    {
                        S.push_back({nd->left,0});
                    }
                break;
                case 1:
                    if(k--==1)
                    {
                        return nd->val;
                    }
                    if(nd->right)
                    {
                        nd=nd->right;
                        st=0;
                    }
                    else
                    {
                        S.pop_back();
                    }
            }
        }
        return 0;
    }
};