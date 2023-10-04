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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> out;
        if(not root)
            return out;
        list<TreeNode*> Q={root,nullptr};
        vector<int> X;
        bool flag;
        while(not Q.empty())
        {
            auto tp=Q.front();
            Q.pop_front();
            if(tp)
            {
                X.push_back(tp->val);
                if(tp->left)
                {
                    Q.push_back(tp->left);
                }
                if(tp->right)
                {
                    Q.push_back(tp->right);
                }
            }
            else
            {
                out.push_back(X);
                X.clear();
                if(not Q.empty())
                    Q.push_back(nullptr);
            }
        }
        return out;
    }
};