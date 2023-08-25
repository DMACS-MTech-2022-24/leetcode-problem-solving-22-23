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
        if(root==NULL)
            return root;
        list<TreeNode*> Q={root};
        while(not Q.empty())
        {
            auto nd=Q.front();
            Q.pop_front();
            swap(nd->left,nd->right);
            if(nd->left!=NULL)
                Q.push_back(nd->left);
            if(nd->right!=NULL)
                Q.push_back(nd->right);
        }
        return root;
    }
};