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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        list<TreeNode*> Q;
        vector<int> o;
        o.push_back(root->val);
        Q.push_back(root);
        while(not Q.empty())
        {
            auto tp=Q.back();
            if(tp->left!=NULL)
            {

                Q.push_back(tp->left);
                o.push_back(tp->left->val);
                tp->left=NULL;
            }
            else if(tp->right!=NULL)
            {
                Q.push_back(tp->right);
                o.push_back(tp->right->val);
                tp->right=NULL;
            }
            else
            {
                Q.pop_back();
            }
        }
        return o;
    }
};