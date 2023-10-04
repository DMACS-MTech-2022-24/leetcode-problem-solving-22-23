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
    int maxLevelSum(TreeNode* root) 
    {
        list<TreeNode*> Q;
        int sum=0;
        int M_lvl=0,lvl=1;
        int M=numeric_limits<int>::min();
        Q.push_back(root);
        Q.push_back(NULL);
        while(not Q.empty())
        {
            auto X=Q.front();
            Q.pop_front();
            if(X==NULL)
            {
                if(sum>M)
                {
                    M=sum;
                    M_lvl=lvl;
                }
                ++lvl;
                sum=0;
                if(not Q.empty())
                    Q.push_back(NULL);
                continue;
            }
            sum+=X->val;
            if(X->left!=NULL)
                Q.push_back(X->left);
            if(X->right!=NULL)
                Q.push_back(X->right);
        }
        return M_lvl;
    }
};