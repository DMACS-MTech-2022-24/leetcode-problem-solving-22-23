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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        list<TreeNode*> Q;
        Q.push_back(root);
        Q.push_back(NULL);
        int depth=1;
        while(true)
        {
            auto it=Q.front();
            Q.pop_front();
            if(it==NULL)
            {
                ++depth;
                Q.push_back(NULL);
                continue;
            }
            if(it->left==NULL and it->right==NULL)
                return depth;
            if(it->left!=NULL)
                Q.push_back(it->left);
            if(it->right!=NULL)
                Q.push_back(it->right);
        }
    }
};