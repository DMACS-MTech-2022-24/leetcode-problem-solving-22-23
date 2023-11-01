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
        if(!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> final = {};
        while(!q.empty())
        {
            int sz = q.size();
            vector<int> tmp = {};
            while(sz){
                TreeNode* curr = q.front();
                q.pop();
                --sz;
                tmp.push_back(curr->val);
                if(curr->left)  q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            final.push_back(tmp);
        }
        return final;

    }
};