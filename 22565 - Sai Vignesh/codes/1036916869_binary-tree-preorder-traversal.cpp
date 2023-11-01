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
        if(!root) return {};
        stack <TreeNode*> q;
        vector<int> result;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr = q.top();
            q.pop();
            result.push_back(curr->val);
            if(curr->right)  q.push(curr->right);
            if(curr->left)   q.push(curr->left);

        }
        return result;
    }
};