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
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};

        vector<int> result;
        int direction=0;
        // bool temp=true;
        stack<pair<TreeNode *,int>> s;
        pair<TreeNode*,bool> tmp(root,0);
        s.push(tmp);
        while(!s.empty())
        {
            TreeNode *curr = s.top().first;
            if(curr->left){
                pair<TreeNode*,int> tmp(curr->left,1);
                s.push(tmp);
                continue;
            }
            if(curr->right){
                pair<TreeNode*,int> tmp(curr->right,-1);
                s.push(tmp);
                continue;
            }
            result.push_back(curr->val);
            direction = s.top().second;
            s.pop();
            if(direction>0) s.top().first->left = NULL;
            else if(direction<0) s.top().first->right = NULL;
        }
        return result;
        
    }
};