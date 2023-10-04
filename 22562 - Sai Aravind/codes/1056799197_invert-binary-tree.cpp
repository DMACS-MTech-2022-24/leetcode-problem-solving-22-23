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
        list<TreeNode*> Q={root};
        while(not Q.empty())
        {
            auto nd=Q.front();
            Q.pop_front();
            auto &l=nd->left,&r=nd->right;
            swap(l,r);
            if(l)
                Q.push_back(l);
            if(r)
                Q.push_back(r);
        }
        return root;
    }
};